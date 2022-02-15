#include <stdio.h>
int main(){
 
    int i, j, a, n, arr[30], sec, inp;
    printf("Enter the value of N : \n");
    scanf("%d", &n);

    printf("Enter the numbers : \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    // sort the array in ascending order:
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (arr[i] > arr[j]) {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
                }
            }
        }
    sec = arr[n-2];

    printf("enter the number you want to Comapre: \n");
    scanf("%d",&inp);

    printf("second largest number in array is: %d \n",sec);

    if(inp>sec){
        printf("the number you entered: %d is greater than %d",inp,sec);
    }else{
        printf("the number you entered: %d is smaller than %d",inp,sec);
    }

    return 0;
}