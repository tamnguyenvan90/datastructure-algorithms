/*Giải thuật
Giả sử LA là một mảng tuyến tính có N phần tử 
và K là số nguyên dương thỏa mãn K <= N. 
Dưới đây là giải thuật để update giá trị phần tử tại vị trí K của mảng LA.
1. Bắt đầu
2. Thiết lập LA[K-1] = ITEM
3. Kết thúc
*/

#include <stdio.h>
void main() {
   int LA[] = {1,3,5,7,8};
   int k = 3, n = 5, item = 10;
   int i, j;
   
   printf("Danh sach phan tu trong mang ban dau:\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   LA[k-1] = item;

   printf("Danh sach phan tu trong mang sau hoat dong update:\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}