#include<stdio.h>

void main()
{ char A;
printf("Input 1 character : ");
scanf("%c", &A);
if((A <= 90)&(A >= 65)) A = (A - 65) + 97;
else if ((A >= 97)&(A <= 122)) A = (A-97) + 65;
else A = A;
printf("The answer is : %c ", A);
getch();
return 0;
}
