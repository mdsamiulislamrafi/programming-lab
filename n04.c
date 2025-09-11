#include<stdio.h>
int main (){
    int N;int sum=0;
    printf("Enter the Integer:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }}
        printf("%d",sum);
    
    return 0;
}