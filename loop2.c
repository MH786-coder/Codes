#include<stdio.h>

int main(){
    
    int i,j,k,row;

    printf("Enter row of patter you want:\n");
    scanf("%d",&row);

    for(i = 1; i<= row;i++){
        for(j = 1;j < 2*(row-i)+1;j++){
            printf(" ");
        }
        for(k = 1; k <= i;k++){
            printf("* ");
        }
        printf("\n");
    }
}