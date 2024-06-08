#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    printf("Enter your string(it contains even numbers length): ");
    scanf("%s",name);

    int length_of_str = strlen(name);

    if(length_of_str%2 == 0){
        for(int i = 0;i < 4;i++){
                printf("%c\n",name[i]);
        }
        for(int spaces = 0;spaces < 6;spaces++){
            printf(" ");
            for(int bal = 4;bal < 8;bal++){
                printf("%c\n",name[bal]);
        }
        }

        }
    else{
        while (0)
        {
            break;
        }      
    }
    
}