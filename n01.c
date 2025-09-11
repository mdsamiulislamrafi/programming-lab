#include<stdio.h>
int main(){
    int N;
    printf("enter the value :");
    scanf("%d",&N);
    printf("numbers are:");
    for(int i=1;i<=N;i++){
        printf (" %d, ",i);
    }
    printf("\n");
    for(int i=1;i<=N;i++){
        if(i%3 == 0 && i%5 == 0){
            printf("%d FrizzBuzz\n",i);
        }
        else if(i%3 == 0 && i%5 !=0){
            printf("%d Frizz\n",i);
        }
        else if(i%5 ==0 && i%3 !=0){
            printf("%d Buzz\n",i);
        }
        else{
            printf("%d\n",i);
        }
             
    }
    return 0;
}