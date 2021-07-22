/*Giả sử LA là một mảng tuyến tính không có thứ tự có N phần tử 
/*và K là một số nguyên dương thỏa mãn K <= N. 
/*Dưới đây là giải thuật chèn phần tử A vào vị trí thứ K của mảng LA.
/*Giải thuật
1. Bắt đầu
2. Gán J=N
3. Gán N = N+1
4. Lặp lại bước 5 và 6 khi J >= K
5. Gán LA[J] = LA[J-1]
6. Gán J = J-1
7. Gán LA[j] = ITEM
8. Kết thúc
*/

#include <stdio.h>
void main() {
   int LA[] = {1,3,5,7,8};
   int item = 10, k = 3, n = 5;
   int i = 0, j = n;
   
   printf("Danh sach phan tu trong mang ban dau:\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   n = n + 1;
	
   while( j >= k){
      LA[j] = LA[j - 1];
      j = j - 1;
   }
	
   LA[j] = item;
   
   printf("Danh sach phan tu cua mang sau hoat dong chen:\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}