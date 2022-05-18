#include <stdio.h>
#include <string.h> //necessário para strcpy

//Funções necessárias
typedef struct
{
    char name[50];
    int userType;
}User;

int verifyUser(char * name, User * users){
    int exists = 1;
    
    for (int i = 0; i < sizeof(users); i++)
    {
        if(strstr(name, users[i].name)){
            return users[i].userType;
        }
    }
    
    return 0;
    
}

int main(void)
{
    User users[2];
    char search[50];
    int exists;
    strcpy(users[0].name, "Gabriel Grinspun");
    strcpy(users[1].name, "Davi Aleixo");
    users[0].userType = 1;
    users[1].userType = 2;

    printf("Digite o nome do usuario que deseja buscar: ");
    scanf("%[^\n]", search);
    getchar();

    exists = verifyUser(search, users);
    if(exists == 1)
    {
        printf("Eh um usuario\n");
    }else if (exists == 2)
    {
        printf("Eh um farmaceutico\n");
    }else if (exists == 3)
    {
        printf("Eh um administrador\n");
    }else
    {
        printf("Nao eh um usuario\n");
    }
    
    
  
}