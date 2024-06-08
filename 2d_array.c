#include<stdio.h>
void print_arr();
void set_arr_val(int val);
void place_val(int co_x,int co_y);
void result();

int arr[5][5];

int main(){
    set_arr_val(1);
    place_val(1,4);
    print_arr();
    result();
}

void set_arr_val(int val){

    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= 5;j++){
            arr[i][j] = val;
        }
    }
}

void print_arr(){
    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= 5;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}

void place_val(int co_x,int co_y){
    for(int i = 1;i <= 5;i++){
        arr[i][co_y] = 0;
        arr[co_x][i] = 0;
    }
}

void result(){
    int count = 0;

    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            if(arr[i][j] == 0){
                count++;
            }
        }
    }
    printf("The total terrorist kills: %d",count);
}