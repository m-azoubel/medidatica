#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


struct Questao
{
    char enunciado[150];
    char alternativa_correta[150];
    char alternativa2[150];
    char alternativa3[150];
};
typedef struct Questao Questao;


int main()
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