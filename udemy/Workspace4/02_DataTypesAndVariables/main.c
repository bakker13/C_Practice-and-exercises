#include <stdio.h>

int main()
{
    
    double rectangleWidth = 32.3;
    double rectangleHeight = 15.3;
    double perimeterRectangle = 0;
    double areaRectangle = 0;
    
    perimeterRectangle = 2 * (rectangleHeight + rectangleWidth);
    areaRectangle = rectangleHeight * rectangleWidth;
    
    printf("perimeter = %.2f\n", perimeterRectangle);
    printf("area = %.2f\n", areaRectangle);
    
    return 0;
}
