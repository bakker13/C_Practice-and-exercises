#include <stdio.h>

int main() {
    
    int minutes;
    double minutesInYear;
    double years;
    double days;
    
    printf("Please give me the minutes: ");
    scanf("%d", &minutes);
    
    // 1 hour = 60 minutes;
    // 1 day = 24 hours;
    // 1 year = 365 days;
    
    minutesInYear = 60 * 24 * 365;
    
    years = minutes / minutesInYear; 
    days = ((double)minutes / 60) / 24;
    
    printf("%d minutes is %lf years and %lf days.\n", minutes, years, days);
    
    
    return 0;
}