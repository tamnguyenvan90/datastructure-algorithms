/*Ví dụ
Giả sử LA là một mảng tuyến tính có N phần tử
và K là số nguyên dương thỏa mãn K <= N.
Dưới đây là thuật toán để xóa một phần tử có trong mảng LA tại vị trí K.
Giải thuật
1. Bắt đầu
2. Gán J=K
3. Lặp lại bước 4 và 5 trong khi J < N
4. Gán LA[J-1] = LA[J]
5. Gán J = J+1
6. Gán N = N-1
7. Kết thúc
*/

#include <stdio.h>
void main() {
   int LA[] = {1,3,5,7,8};
   int k = 3, n = 5;
   int i, j;
   
   printf("Danh sach phan tu trong mang ban dau:\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   j = k;
	
   while( j < n){
      LA[j-1] = LA[j];
      j = j + 1;
   }
	
   n = n -1;
   
   printf("Danh sach phan tu trong mang sau hoat dong xoa:\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}