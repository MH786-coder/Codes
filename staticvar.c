#include<stdio.h>
#include<string.h>
int main(){
    static int i = 0;
    printf("the address of i is %p\n",&i);
    int j = 1;
    printf("the address of j is %p",&j);
}