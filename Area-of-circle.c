// Find the area Of Circle

#include <stdio.h>
#define pi 3.14
int main()
{
    float r, area;

    printf("What is the radius of a circle:\n");
    scanf("%f", &r);

    area = pi * (r * r);

    printf("Area of Circle = %.2f sq.unit\n", area);

    return 0;
}