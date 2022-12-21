// BAsic calculator using switch case


#include <stdio.h>
int main()
{
    int ans;
    float a, b, c;
    printf("Enter Two numbers:\n");
    scanf("%f%f", &a, &b);

    printf("press opereators for desire calculation:\n");

    printf("press 1 for addition:\n");
    printf("press 2 for subtraction:\n");
    printf("press 3 for multiplication:\n");
    printf("press 4 for division:\n");
    scanf("%d", &ans);
    switch (ans)
    {
    case 1:
       c = a + b;
        printf("addition = %f", c);
        break;
    case 2:
       c = a - b;
        printf("subtraction = %f", c);
        break;
    case 3:
       c = a * b;
        printf("multiplication = %f", c);
        break;
    case 4:
       c = a / b;
        printf("division = %f", c);
        break;
    
    default:
        printf("error");
        break;
    }

    return 0;
}