// Basic Mathematical operation 

#include <stdio.h>
int main()
{
    float n1, n2, add, sub, mul, div;

    printf("Enter the value of n1:\n");
    scanf("%f", &n1);

    printf("Enter the value of n2:\n");
    scanf("%f", &n2);

    add = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;
   
    
    printf("Addition of Two numbers:%.2f\n", add);
    printf("Subtraction of Two numbers:%.2f\n", sub);
    printf("Multiplication of Two numbers:%.2f\n", mul);
    printf("Division of Two numbers:%.2f\n", div);
    
    
    return 0;
}