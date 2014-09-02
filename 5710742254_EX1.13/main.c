#include <stdio.h>

int main( void )/* เริ่มต้นโปรแกรม */
{
   int integer1; /* ตัวเลขที่ 1 ที่ถูกป้อน โดยผู้ใช้ */
   int integer2; /* ตัวเลขที่ 2 ที่ถูกป้อน โดยผุู้ใช้ */
   int sum;      /* ตัวแปร sum ที่เก็บไว้ */

   printf( "Enter first integer\n" ); /* แสดงค่า Enter first integer */
   scanf( "%d", &integer1 );          /* เก็บค่า integer 1 */

   printf( "Enter second integer\n" ); /* แสดงค่า Enter second integer  */
   scanf( "%d", &integer2 );           /* เก็บค่า integer 2 */

   sum = integer1 + integer2; /* ได้ผลลัพธ์ของ sum */

   printf( "Sum is %d\n", sum ); /* แสดงค่า sum */

   return 0; /* บอกถึงโปรแกรมสำเร็จเรียบร้อย */

} /*  จบการทำงาน function main */
