#include <stdio.h>

int main()
{

    float flo_base , flo_height , flo_area;
    printf("Enter Base : ");
    scanf("%f",&flo_base);
    printf("Enter Height : ");
    scanf("%f",&flo_height);

    flo_area = (0.5) * flo_base * flo_height;

    printf("Triangle Area Is %f",flo_area);
    return 0;
 }
