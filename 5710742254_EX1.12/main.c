#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary,tax;
    printf("Input salary :");
    scanf("%d",&salary);
    tax=salary*0.1;
    printf("salary : %d\n",salary);
    printf("tax    : %d",tax);
    return 0;
}
