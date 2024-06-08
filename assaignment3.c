#include<stdio.h>
void multiplication_table(int rows,int table);
void decompose_number(int number[],int how_many);
void reverse_num(int number[]);
int main(){
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    reverse_num(a);
}

void multiplication_table(int rows,int table){
    int i;
    int result;

    printf("Enter the row of a table: ");
    scanf("%d",&rows);
    printf("Enter the table which you want: ");
    scanf("%d",&table);

    for(i = 1;i <= rows;i++){
        result = i*table;
        printf("%d * %d = %d\n",i,table,result);
    }
}

void decompose_number(int number[],int how_many){
    int pos = 1;
    for(int i = 0;i < how_many;i++){
        if(number[i] <= how_many){
            printf("%dst position = %d",pos,number[i]);
        }
    }
}

void reverse_num(int number[]){
    for(int i = -1;i<number[i];i++){
        printf("%d",number[i]);
    }
}