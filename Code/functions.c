#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> //necessário para strcpy

//UserTypes: 1 - User | 2 - Adm | 3 - Farma

//Funções necessárias
typedef struct Users
{
    char name[50];
    char cpf[11];
    int userType;
    struct Users* nUser;
}User;

//--------------------------------------------------------------------------//
//---------------------------Função de adição-------------------------------//
//--------------------------------------------------------------------------//

User* addUser(char *cpf, char *name, int userType, User* users)
{

    if(cpf == NULL)
    {
        User* novo = (User*)malloc(sizeof(User));
        strcpy(novo->cpf, cpf);
        strcpy(novo->name, name);
        novo->userType = userType;
        novo->nUser = NULL;

        return novo;
    }
    else
    {
        users->nUser = addUser(cpf, name, userType, users->nUser);
        return users;
    }

}


//--------------------------------------------------------------------------//
//----------------------Função de verificação-------------------------------//
//--------------------------------------------------------------------------//

int verifyUser(char * cpf, User* users){
    int user;

    if(strstr(cpf, users->cpf)){
        user = users->userType;
    }else{
        user = verifyUser(cpf, users->nUser);
    }
    
    return user;
}


//--------------------------------------------------------------------------//
//----------------------------Função de Quiz--------------------------------//
//--------------------------------------------------------------------------//


typedef struct Questao
{
    char enunciado[150];
    char alternativa_correta[150];
    char alternativa2[150];
    char alternativa3[150];
}Questao;




int quiz()
{
    Questao perguntas[10];

    //char alternativa_usuario[150];

    int alternativa_usuario;

    int aleatorio = 1;

    int aux = 2;
    int aux3 = 1;
    

    int list_aux[3] = {1,2,3};

    srand(time(NULL));

    
    for (int i=0; i<150 ; i++)
    {
        perguntas[0].enunciado[i] = ' ';
    }
    printf("escreva a pergunta 1\n");
    scanf("%[^\n]",perguntas[0].enunciado);
    getchar();

    for (int i=0; i<150 ; i++)
    {
        printf("%c",perguntas[0].enunciado[i]);
    }

    printf("\nescreva a alternativa 1\n");
    scanf("%[^\n]",perguntas[0].alternativa_correta);
    getchar();

    printf("escreva a alternativa 2\n");
    scanf("%[^\n]",perguntas[0].alternativa2);
    getchar();

    printf("escreva a alternativa 3\n");
    scanf("%[^\n]",perguntas[0].alternativa3);
    getchar();
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("alternativas: \n");
    printf("1- %s\n",perguntas[0].alternativa_correta);
    printf("2- %s\n",perguntas[0].alternativa2);
    printf("3- %s\n",perguntas[0].alternativa3);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    scanf("%i",&alternativa_usuario);
    getchar();
    switch (alternativa_usuario){
        case 1:
            printf("acertou");
            break;
        default:
            printf("errou");
            break;
    }
    /*
    printf("digite a sua alternativa\n");
    scanf("%i",&alternativa_usuario);
    getchar();

    switch (alternativa_usuario){
        case 1:
            printf("acertou");
            break;
        default:
            printf("errou");
            break;
    };
        
    
    TESTE UNITARIO
    printf("escreva a sua alternativa\n");
    scanf("%[^\n]",alternativa_usuario);
    getchar();
    

    if (strcmp(alternativa_usuario, perguntas[0].alternativa_correta) == 0){
        printf("booooa\n");
    }
    else
    {
        printf("eroooou\n");
    }*/
    return 0;

}

//--------------------------------------------------------------------------//
//-----------------------Função de Teleatendimento--------------------------//
//--------------------------------------------------------------------------//


void IniciarChamada()
{
   printf("chamada iniciada\n");
}

void FecharChamada()
{

    printf("chamada finalizada\n");
}  

void ConectarAudio()
{
    printf("conectando audio\n");
}

void DesconectarAudio()
{
    printf("desconectando audio\n");
}

int AumentarAudio(int volume)   //Trocar no fluxograma essa função de void por int
{
    if (volume<=90)
    {
        volume = volume + 10;
    }
    return volume;  
}

int DiminuirAudio(int volume)   //Trocar no fluxograma essa função de void por int
{
    if (volume>=10)
    {
        volume = volume - 10;
    }
    

    return volume;
}

int LigarCam(int camera)   //Testado // camera ja irá vir desligada( camera = OFF)
{
    

    if (camera == 1)
    {
        printf("ON \n");
        camera = 2;
        
    }
    else
    {
        printf("Camera ja ligada...\n");
        
    }
    return camera;

}

int DesligaCam(int camera)  //Testado
{

    if (camera == 2)
    {
        printf("OFF\n");
        camera = 1;
        
    }
    else if (camera == 1)
    {
        printf("Camera ja desligada...\n");
    }
    
    return camera;
}

int EnviarMsg()     //testado
{
    int num;
    printf("Digite o numero da pergunta\n");
    printf("1 - estou com sintomas gripais qual medicamento eu devo tomar ?\n");
    printf("2 - Como devo tomar o  medicamento XXX ?\n");
    printf("3 - Nao estou mais sentido os sintomas que estava antes, posso parar de tomar o remedio ?\n");
    scanf("%i",&num);
    getchar();
    return num;

}

void ReceberMsg(int num)    //Testado
{
    switch (num)
    {
    case 1:
        printf("O medicamento XXX e o recomendavel a voce");
        break;
    case 2:
        printf("Você deve toma-lo em 8 em 8 horas por 5 dias");
        break;
    case 3:
        printf("Não e recomendavel pelos medicos faze-lo\n");
        break;
    }
}

int ConectarMic(int mic)    //ja testado
{


    if (mic == 1)
    {
        printf("Microfone conectado\n");
        mic = 2;
    }
    else
    {
        printf("Ja conectado\n");
    }
    return mic;
}

int DesconectarMic(int mic)     //Ja testado
{

    if (mic == 2)
    {
        printf("Microfone desconectado\n");
        mic = 1;
    }
    else
    {
        printf("Ja desconectado\n");
    }
    return mic;
}