#include <stdio.h>

int gcd (int numOne, int numTwo);
float squareRoot (float numberFour);
float absoluteConversion (float numThree);

int main() {
    
    gcd(48, 18);
    gcd(56, 98);
    printf("\n");
    
    printf("The absolute value of -5.1 is %.1f\n", absoluteConversion(-5.1));
    printf("The absolute value of 2.9 is %.1f\n", absoluteConversion(2.9));
    printf("\n");
    
    squareRoot(16);
    squareRoot(-16);
    printf("\n");

    return 0;
}

int gcd(int numOne, int numTwo) {
    
    int greatestCommonDiv = -1;
    for (int i = 1; i < numOne; i++) {
        if (numOne % i == 0 && numTwo % i == 0) {
            greatestCommonDiv = i;
        }
    }
    
    printf("The greatest common divisor of %d and %d is %d\n", 
                    numOne, numTwo, greatestCommonDiv);

                    
    return greatestCommonDiv;
}

float absoluteConversion (float numThree) {
    
    
/*
    if (numThree < 0) {
        return (numThree * -1);
    } else {
        return numThree;
    }
*/
    float absoluteValue;
    
    if (numThree < 0) {
        absoluteValue = numThree * -1;
    } else {
        absoluteValue = numThree;
    }
    //printf("AbsoluteValue is %.2f\n", absoluteValue);
    
    return absoluteValue;
}

float squareRoot (float numberFour) {
    
    if (numberFour < 0) {
        printf("Negative number cannot use here.\n");
        return -1.0;
    }
    
    const float epsilon = .00001;
    float guess = 1.0;
    
    while (absoluteConversion(guess * guess - numberFour) >= epsilon) {
        guess = (numberFour / guess + guess) / 2.0;
    }
    
    printf("The square root value of %.2f number is %.2f\n", numberFour, guess);
    return guess;
}
