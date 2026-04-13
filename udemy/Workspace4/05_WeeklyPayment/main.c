#include <stdio.h>

/* or use const
#define PAYRATE 12.00
#define PAYRATEOVERTIME 18.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
*/

int main() {
    
    float hoursWorked;
    
    printf("Please give me how many hours you worked this week: ");
    scanf("%f", &hoursWorked);
    
    float overtime;
    float basicTime;
    
    if (hoursWorked <= 40) {
        basicTime = hoursWorked;
    } else {
        basicTime = 40;
        overtime = hoursWorked - basicTime;
    }
    
    float basicPayRatePerHour = 12.00;
    float overtimePayRatePerHour = basicPayRatePerHour * 1.5;
    
    float grossPay = basicTime * basicPayRatePerHour
                        + overtime * overtimePayRatePerHour;
    float tax = 0;
    
    
    if (grossPay >= 450) {
        tax += (300 * 0.15) + (150 * 0.2) + (grossPay - 450) * 0.25;
    } else if (grossPay >= 300 && grossPay < 450) {
        tax += (300 * 0.15) + (grossPay - 300) * 0.2;
    } else if (grossPay < 300 && grossPay > 0) {
        tax += grossPay * 0.15;
    }
    
    float netPay = grossPay - tax;
    
    
    printf("\nhoursWorked = %.2f\n", hoursWorked);
    printf("basicTime = %.2f\n", basicTime);
    printf("overTime = %.2f\n", overtime);
    printf("\n");
    printf("grossPay = $%.2f\n", grossPay);
    printf("tax = $%.2f\n", tax);
    printf("netPay = $%.2f\n", netPay);
    
    return 0;
}