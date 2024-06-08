#include<stdio.h>
int main(){
    int i = 1;
    printf("the value of i is %d\n",i);

    {
        int i = 2;
        printf("the value of i is %d\n",i);
    }
    printf("the value of i is %d\n",i);
}