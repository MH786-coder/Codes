#include<stdio.h>

int main(){

    int row,space,i,j;

    printf("Enter the row:\n");
    scanf("%d",&row);

    for(i = 1;i <= row;i++){
        for(space = 1; space <= i;space++){
            printf(" ");
        }
        for(j = i;j <= (2*row-i);j++){
            printf("*");
        }
        printf("\n");
    }
}