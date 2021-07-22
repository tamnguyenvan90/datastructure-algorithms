/*Ví dụ

Giả sử LA là một mảng tuyến tính có N phần tử và 
K là số nguyên dương thỏa mãn K <= N. 
Dưới đây là giải thuật để tìm một phần tử ITEM 
bởi sử dụng phương pháp tìm kiếm tuần tự (hay tìm kiếm tuyến tính).
Giải thuật
1. Bắt đầu
2. Gán J=0
3. Lặp lại bước 4 và 5 khi J < N
4. Nếu LA[J] là bằng ITEM THÌ TỚI BƯỚC 6
5. Gán J = J +1
6. In giá trị J, ITEM
7. Kết thúc
*/

#include <stdio.h>
void main() {
   int LA[] = {1,3,5,7,8};
   int item = 5, n = 5;
   int i = 0, j = 0;
   
   printf("Danh sach phan tu trong mang ban dau:\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   while( j < n){
	
      if( LA[j] == item ){
         break;
      }
		
      j = j + 1;
   }
	
   printf("Tim thay phan tu %d tai vi tri %d\n", item, j+1);
}