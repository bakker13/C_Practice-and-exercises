#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main() {
    
    //rainfall data
    float rainfall[YEARS][MONTHS] = 
    {
        {4.1, 3.9, 3.1, 1.0, 4.4, 2.7, 2.9, 1.9, 3.3, 4.0, 2.8, 3.5},
        {4.5, 3.3, 3.7, 1.4, 4.1, 2.7, 3.9, 1.6, 4.3, 4.4, 2.0, 3.2},
        {3.1, 3.5, 3.1, 3.0, 4.3, 3.5, 2.3, 1.9, 3.5, 2.9, 2.1, 3.3},
        {3.2, 3.4, 3.7, 2.2, 4.1, 1.7, 2.1, 2.0, 3.6, 3.4, 2.4, 3.2},
        {4.1, 3.9, 3.0, 2.0, 4.8, 3.7, 2.0, 1.4, 3.1, 4.3, 2.7, 3.1}
    };
    
    float subtotal = 0;
    float sumAll = 0;

    printf("YEAR\t\tRAINFALL   (inches)\n");
    
    for (int year = 0; year < YEARS; year++) {
        for (int month = 0; month < MONTHS; month++) {
            subtotal += rainfall[year][month];
        }
        
        printf("%5d \t\t%15.1f\n", 2010 + year, subtotal);
        sumAll += subtotal;
    }
    
    float averageYears = sumAll / YEARS;
    
    printf("\n\nThe yearly average is %.1f inches.\n\n", averageYears);
    

    
    printf("The monthly averages: \n\n");
    printf(" Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");
    
    for (int month = 0; month < MONTHS; month++) {
        for (int year = 0; year < YEARS; year++) {
            subtotal += rainfall[year][month];
        }
        
        float monthlyAverage = subtotal / YEARS;
        
        printf(" %4.1f ", monthlyAverage);
    }
    
	return 0;
}
