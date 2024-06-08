#include<stdio.h>

struct member
{
    char name[50];
    int age;
};

int main()
{
    struct member m;
    int entry;
    printf("how many members you will entry: ");
    scanf("%d",&entry);

    for(int i = 0; i < entry;i++){
        printf("Enter name: ");
        scanf("%s",&m.name);
        printf("Enter age: ");
        scanf("%d",&m.age);
        printf("\n");
    }
    printf("\n");
    printf("The members details:\n");

    for(int j = 0;j < entry;j++){
        printf("The member name: %s\n",m.name);
        printf("The member age : %d\n",m.age);

    }
}
