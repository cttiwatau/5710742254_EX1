#include <stdio.h>

int main( void )
{
   int count = 1; /* เริ่มต้นค่า count */

   while ( count <= 10 ) { /* แสดงวนซ้ำ 10 ครั้ง */

      printf( "%s\n", count % 2 ? "****" : "++++++++" );/* บรรทัดแสดงค่า*/
      count++; /* ค่า count เพิ่มขึ้น */
   } /* จบคำสั่ง while */

   return 0; /* โปรแกรมดำเนินการเสร็จสิ้น */

} /* จบโปรแกรม function main */
