// find the of quadratic equation

#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, n3, d, r1, r2;

    printf("Enter the value of n1:\n");
    scanf("%f", &n1);

    printf("Enter the value of n2:\n");
    scanf("%f", &n2);

    printf("Enter the value of n3;\n");
    scanf("%f", &n3);

    d = n2 * n2 - (4 * n1 * n3);

    r1 = (-n2 + sqrt(d)) / 2 * n1;
    r2 = (-n2 - sqrt(d)) / 2 * n1;

    printf("root1=%f\n", r1);
    printf("root2=%f\n", r2);

    return 0;
}