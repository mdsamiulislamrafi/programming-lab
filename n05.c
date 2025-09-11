#include<stdio.h>
int main (){
    int N;
    printf("Entter the Integer:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i>0 && i%2==0){
            printf("%d is Positive Even\n",i);
        }
        else if(i>0 && i%2!=0){
            printf("%d is POsitive Odd\n",i);
        }
        else if(i>0 && i%7 == 0){
            printf("%d is Multiple of 7\n",i);
        }
    }
    return 0;
}