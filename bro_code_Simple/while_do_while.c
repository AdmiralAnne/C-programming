# include<stdio.h>

int do_while(){
    int num=0;
    int sum=0;

    do
    {
        printf("enter anumber above 0: ");
        scanf("%d", &num);
        // Loops untill you enter zero-- adds Each number to the 'sum'
        if(num>0){
            sum += num;
        }

    } while(num>0);

    printf("sum: %d", sum);

}
int main(){
    int num= 1;
    int sum = 0;
    while(num > 0){
        printf("enter anumber above 0: ");
        scanf("%d", &num);
        // Loops untill you enter zero-- adds Each number to the 'sum'
        if(num>0){
            sum += num;
        }
    }
    printf("sum: %d \n", sum);

    do_while();
}


