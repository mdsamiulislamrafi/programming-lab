#include<stdio.h>
int main(){
    int pos,remainder,num;int odd=0;int even=0;int zero=0;
    printf("ENter the Positive Integer:");
    scanf("%d",&pos);
    
    num = pos;
    while(num > 0){
        remainder= num%10;
        if(remainder==0){
            zero +=1;
        }
        else if(remainder%2 == 0){
            even+=1;
        }
        else{
            odd+=1;
        }
        num /=10;

    }if(pos<0){
        printf("Wrong Input.\n");
    }else{
    printf("total odd digits :%d\n",odd);
    printf("total even digits:%d\n",even);
    printf("total zero digits:%d\n",zero);
    }
    return 0;
}