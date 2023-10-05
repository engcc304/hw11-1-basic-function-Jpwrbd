/*
    รับค่าจากผู้ใช้จำนวน 3 ค่า และสร้างฟังก์ชันในการหาผลรวมของจำนวน 3 ค่านี้ และแสดงผลลัพธ์มายังหน้าจอ พร้อมระบุชื่อฟังก์ชันที่เรียกใช้งาน เช่น รับค่า 3, 5, 6 จะแสดงผลลัพธ์ว่า 14 (Calculate by Additional Function)

    Test case:
        Input 1 : 
            3
        Input 2 : 
            4
        Input 3 : 
            5
    Output:
        Summation = 12 (Calculate by Additional Function)
*/
#include <stdio.h> //จัดการเเกี่ยวกับ input output
#include <stdlib.h>

int Scal(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}
int main() {
    int input1, input2, input3;
    //รับค่าจากผู้ใช้
    printf( "Input 1 : " ) ;
    scanf( "%d", &input1) ;
    printf( "Input 2 : " ) ;
    scanf( "%d", &input2) ;
    printf( "Input 3 : " ) ;
    scanf( "%d", &input3 ) ;
    int result = Scal(input1, input2, input3) ;  //เรียกใช้ฟังก์ชันเหาผลรวม
    printf("Summation = %d (Calculate by Additional Function)\n", result);
return 0 ;
}