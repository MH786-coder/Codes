#include<stdio.h>
#include<string.h>

void Interface();
int Numbers(int number);
int save_books(int recieved_nums);

int len(int var[]){
    int count = sizeof(var)/sizeof(int);
    return count;
}

/**
 * int main(){

}
*/

void Interface(){
    printf("---------------------\n");
    printf("1.Enter numbers\n");
    printf("2.Saved numbers\n");
    printf("3.Exit\n");
    printf("---------------------\n");
}

/*
int Numbers(int number){
    char choice[10];
    printf("Do you want to set the name of this number(default{yes}): ");
    scanf("%s\n",choice);
}
*/