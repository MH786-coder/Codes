#include<stdio.h>
int main(){
    int i = 1,j = 2;
    int n = 7,h = 5;

    printf("the value of i is %d\n",i);
    printf("the value of j is %d\n",j);
    printf("the value of n is %d\n",n);
    printf("the value of h is %d\n",h);

    //address of all

    printf("the address of i is %p\n",&i);
    printf("the address of j is %p\n",&j);
    printf("the address of n is %p\n",&n);
    printf("the address of h is %p\n",&h);

    int *get=&i-0x1;
    printf("the hacked address:%p\n",get);
    printf("find value of hacked variable:%d",*get);


}