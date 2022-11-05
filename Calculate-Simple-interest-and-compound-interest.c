// Calculate SI & CI

#include <stdio.h>
#include <math.h>

int main()
{
    float si, ci , p, r, t;
    printf("Enter Principle:\n");
    scanf("%f", &p);
    printf("Enter Rate:\n");
    scanf("%f", &r);
    printf("Enter Time:\n");
    scanf("%f", &t);

    si = (p * r * t) / 100 ;

    ci = p * pow((1 + r / 100), t);
    printf("simple interest : Rs%.2f\n", si);
    printf("compound interest : Rs%.2f\n", ci);

    return 0;
}