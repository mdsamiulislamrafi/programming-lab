#include<stdio.h>
int main(){
    int N;
    int sum=0;
    printf("enter the integer:");
    scanf("%d",&N);
    for(int i = 1 ; i<=N ; i++){
        if((i%4==0 && i%6 !=0)||(i%2 !=0 && i>50)){
            sum+=i;
        }
    }
    printf("sum total=%d",sum);
    return 0;

}