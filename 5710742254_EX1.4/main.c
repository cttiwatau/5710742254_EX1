#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int days;
    float principal;
    float rate;
    float charge;
    float times;
    float interest;

    printf("Enter loan principal (-1 to end) : ");
    scanf("%f",&principal);
    printf("Enter interest rate :");
    scanf("%f",&rate);
    printf("Enter of loan in days :");
    scanf("%d",&days);
    times=principal*rate*days;
    interest=times/365;
    printf("The interest charge is :%.2f",interest);
    getch();
    return 0;
}
