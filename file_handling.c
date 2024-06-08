#include<stdio.h>
#include<string.h>

char *Error(char *NOE);

int main(){
    FILE* file;
    char got[100];
    char input[50];
    char input2[10];

    printf("Enter the file name(with extension): ");
    scanf("%s",input);
    printf("Mode: ");
    scanf("%s",input2);
    
    file = fopen(input,input2);

    if(input == NULL){
        printf("file not exist");
    }
    if(strcmp(input2,"r")==0){
        while ((fgets(got,sizeof(got),file))!='\0')
        {
            printf("%s",got);
        }
    }
    if(strcmp(input2,"w")==0){
        char w[100];
        printf("Enter the content in the file: ");
        for(int i = 0;i <= 1;i++){
            scanf("%s",w);
        }
        fputs(w,file);
        if(got == NULL){
            Error("the file is not filled");
        }
        else{
            printf("Done");
        }
        fclose(file);
    }
}

char *Error(char *NOE){
    printf("----------------------------------");
    printf(strcat("Error:",NOE));
    printf("----------------------------------");
}

