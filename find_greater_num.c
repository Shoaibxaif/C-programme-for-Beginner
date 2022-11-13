// find greater number

#include <stdio.h>
int main()
{
    float n1, n2, n3;

    printf("Enter the value of n1;\n");
    scanf("%f", &n1);

    printf("Enter the value of n2;\n");
    scanf("%f", &n2);

    printf("Enter the value of n3;\n");
    scanf("%f", &n3);
    
    if (n1>n2 && n1>n3)
    {
        printf("n1 is the largest");
    }

    else if (n2>n1 && n2>n3)
    {
        printf("n2 is the largest");
    }

    else
    {
        printf("n3 is greater");
    }
    
    return 0;
}