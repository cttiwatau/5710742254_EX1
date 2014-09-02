#include<stdio.h>
int main()
{
    int A;
    printf("Enter number :");
    scanf("%d",&A);
    if ((A%7)>0)
        printf("irrational\n");
    else
        printf("divisibly\n");
    return 0;
}
