
//A program calculate to circle area.

#include <stdio.h>

int main()
{
    float r;
    float area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    
    area = 3.14 * r * r;
    
    printf("Area = %f", area);
    
    return 0;
}
