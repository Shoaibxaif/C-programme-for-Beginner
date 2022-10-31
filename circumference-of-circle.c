// Find the circumference Of Circle

#include <stdio.h>
#define pi 3.14
int main()
{
    float r, circum;

    printf("What is the radius of a circle :\n");
    scanf("%f", &r);

    circum = 2 * pi * r;
    printf("Circumference of Circle = %.2f unit \n", circum);


    return 0;
}