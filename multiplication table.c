#include<stdio.h>
int main(){

    //make multiplication table

    int i,user_input;

    printf("Enter multiplication table you want:");
    scanf("%d",&user_input);

    for(i = 1;i <= user_input;i++){
        int total = i*user_input;
        printf("%d*%d=%d\n",i,user_input,total);
        printf("\n");
    }
    
}