#include <stdio.h>
#include <stdlib.h>

int main(){
    int c = fork();
    printf("hello\n");
    printf("%d",c);
}