#include<stdio.h>

int main(){

    int row,space,i,pattern;

    printf("Enter the row of pyramide:\n");
    scanf("%d",&row);

    for(i = 1;i <= row;i++){
        for(space = 1;space <= (row*2-i);space++){
            printf(" ");
        }
        for(pattern = 1;pattern <= (i*2)-1;pattern++){
            printf("*");
        }
        printf("\n");
    }
}