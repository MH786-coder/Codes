#include<stdio.h>

int main(){
    int i = 1;
    int *k = &i;

    printf("the value of i is %d\n",i);
    printf("the value of &i is %p\n",&i);
    printf("the value of k is %p\n",&k);
    printf("the value of *k is %d",*k);

}