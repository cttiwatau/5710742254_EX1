#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,multiplity,div;
    printf("Enter first number :");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);

    multiplity = num1 * num2;
    div = num1 / num2;
    printf("multiplity :%f\n",num1);
    printf("div        :%f\n",num2);
    return 0;
}
