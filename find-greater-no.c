// find the greater no. between two no.

#include<stdio.h>
int main()
{
     float n1, n2;

    printf("Enter the value of n1;\n");
    scanf("%f", &n1);

    printf("Enter the value of n2;\n");
    scanf("%f", &n2);

    if(n1>n2)
    {
        printf("N1 is greater");
    }

    else
    printf("N2 is greater");

    return 0;
}