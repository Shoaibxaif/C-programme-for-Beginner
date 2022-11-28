// programming for check a person is eligible or not 

#include <stdio.h>
int main()
{

int age;
printf("Please Enter The age :\n");
scanf("%d", &age);

if (age > 18 && age < 100)
{
    printf("Person is eligible to vote:\n");
}
else
{
    printf("Person is not eligible to vote\n");
}
    return 0;
}