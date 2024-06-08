#include<stdio.h>
#include<string.h>
int main(){
    //declare Buffer for name input
    char a[10];
    printf("Enter value of a: ");
    scanf("%s",a);

    //declare other Buffer
    char b[3];
    printf("Enter value of b: ");
    scanf("%s",b);
    
    printf("the value of a:%s\n",a);
    printf("the value of b:%s\n",b);

    //the address of a and b
    printf("the value of a:%p\n",a); //1
    printf("the value of b:%p\n",b); //2


}