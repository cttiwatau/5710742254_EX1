#include <stdio.h>

int main( void )/* ������������ */
{
   int integer1; /* ����Ţ��� 1 ���١��͹ �¼���� */
   int integer2; /* ����Ţ��� 2 ���١��͹ �¼����� */
   int sum;      /* ����� sum �������� */

   printf( "Enter first integer\n" ); /* �ʴ���� Enter first integer */
   scanf( "%d", &integer1 );          /* �纤�� integer 1 */

   printf( "Enter second integer\n" ); /* �ʴ���� Enter second integer  */
   scanf( "%d", &integer2 );           /* �纤�� integer 2 */

   sum = integer1 + integer2; /* ����Ѿ��ͧ sum */

   printf( "Sum is %d\n", sum ); /* �ʴ���� sum */

   return 0; /* �͡�֧�������������º���� */

} /*  ����÷ӧҹ function main */
