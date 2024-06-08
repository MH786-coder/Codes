#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int check_character(char *password);
int check_uppercase(char *password);
int check_lowercase(char *password);
int check_symbols(char *password);
int check_sequential(char *password);

int score = 0;

int main(){
    char pass[10];
    printf("Enter your password: ");
    scanf("%s",pass);

    score += check_character(pass);
    score += check_uppercase(pass);
    score += check_lowercase(pass);
    score += check_symbols(pass);
    score += check_sequential(pass);

    printf("The recieved password: %s\n",pass);
    printf("The password strength: %d\n",score);

    if(score >= 7 && score == 9){
        printf("this is a strongest password\n");
    }
    if(score < 7 && score > 4){
        printf("this is a normal password\n");
    }
    if(score <= 4){
        printf("this is a weak password,Don\'t use it\n");
    }
}

int check_character(char *password){
    if(strlen(password) >= 8){
        return 2;
    }
    else{
        return 0;
    }
}

int check_uppercase(char *password){
    int counter = 0;
    for(int i = 0;i < strlen(password);i++){
        if(isupper(password[i])){
            counter++;
        }
        if(counter >= 1){
            return 2;
        }
        else{
            return 0;
        }
    }
}

int check_lowercase(char *password){
    int counter = 0;
    for(int i = 0;i < strlen(password);i++){
        if(islower(password[i])){
            counter++;
        }
        if(counter >= 3){
            return 2;
        }
        else{
            return 0;
        }
    }
}

int check_symbols(char *password){
    int counter = 0;
    for(int i = 0;i < strlen(password);i++){
        if(ispunct(password[i])){
            counter++;
        }
        if(counter >= 1){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int check_sequential(char *password){
    for(int i = 0;i < strlen(password);i++){
        if(isdigit(password[i])){
            int n1 = password[i];
            if(isdigit(password[i+1])){
                int n2 = password[i+1];
                if(n2-n1==1){
                    return 2;
                }
                else{
                    return 0;
                }
            }else{
                continue;
            }
        }else{
            continue;
        }
    }
}