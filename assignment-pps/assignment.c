#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int arr[5][5];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<5; i++) {
      for(j=0;j<5;j++) {
         printf("Enter value for arr[%d][%d]:", i+1, j+1);
         scanf("%d", &arr[i][j]);
      }
   }
   
   for(i=0; i<5; i++) {
      for(j=0;j<5;j++) {
          arr[i][j]=1 - arr[i][j]; //code by @thnose_samuel
      }
   }

   printf("Two Dimensional array elements:\n");
   for(int i=0; i<5; i++) {
    // inner loop for column
    for(int j=0; j<5; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n"); // new line
  }
   return 0;
}