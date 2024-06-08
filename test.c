#include<stdio.h>

void set_arr(int val,int x,int y);
int arr[5][5];
int main(){
    set_arr(2,1,1);
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            arr[row][col] = 0;
            printf(" %d ",arr[row][col]);
        }
        printf("\n");
    }
    
}

void set_arr(int val,int x,int y){
    for(int i=1;i<=5;i++){
        arr[x][i] = val;
        arr[i][y] = val;
    }
}