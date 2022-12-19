#include<stdio.h>
int main()
{
    float n ;

    printf("Enter the number:\n");
    scanf("%f",&n);

    if (n>0)
    {
        printf(" Entered no %.2f is positive", n);
    }
    
    else if (n<0)
    {
         printf(" Entered no %.2f is negative", n);
    }
    else
    {
        printf("Entered no is zero");
    }

    return 0;
}