#include <stdio.h>

int main( void )
{
   int count = 1; /* ������鹤�� count */

   while ( count <= 10 ) { /* �ʴ�ǹ��� 10 ���� */

      printf( "%s\n", count % 2 ? "****" : "++++++++" );/* ��÷Ѵ�ʴ����*/
      count++; /* ��� count ������� */
   } /* ������� while */

   return 0; /* ��������Թ���������� */

} /* ������� function main */
