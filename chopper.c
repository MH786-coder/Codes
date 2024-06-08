#include<stdio.h>

void print_array();
void set_array(int row,int col);
void result();

int arr[8][8];
int chopper;

int main(){
    int row,col;
        printf("In this 8x8 house,each room there was 1terrorist and 1hostaged person...\n");
        printf("-----------------------------*MISSION*-----------------------------\n");

        //initialize array
        for (int i = 1; i <= 8; i++){
            for (int j = 1; j <= 8; j++){
                arr[i][j] = 1;
            }
        }
        print_array();
        printf("----------------------------------------------------------------------\n");

        printf("How many chopper to land...? ");
        scanf("%d",&chopper);

        for (int i = 1; i <= chopper;){
            printf("----------------------------------------------------------------------\n");
            printf("Enter the landing location of the chopper [x,y]-Coordinates #%d (x,y) : ",i);
            scanf("%d,%d",&row,&col);
            if ((row >= 1 && row <=8) && (col >= 1 && col <=8)){
                set_array(row,col);
                i++;
                print_array();
                printf("----------------------------------------------------------------------\n");
                result();
            }else{
                printf("Invalid value\n");
            }
            
        }
        
}

void print_array(){
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    
}

void set_array(int row,int col){
    for (int i = 1; i <= 8; i++){
        arr[row][i] = 0;
        arr[i][col] = 0;
    }
    
}

void result(){
    int count = 0;
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            if (arr[i][j]==0){
                count++;
            }
            
        }
        
    }
    printf("The total number of terrorist killed :%d\n",count);
    printf("The total number of hostages requied :%d\n",count);
    
}