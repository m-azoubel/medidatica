#include <stdio.h>

struct Questao
{
    char enunciado[150];
    char alternativa1[150];
    char alternativa2[150];
    char alternativa3[150];
    char alternativa4[150];
};
typedef struct Questao Questao;



int main ()
{

    int n1;
    int n2;
    int n3;

    char q_pergunta[150];
    char alternativa[150];

    Questao perguntas[5];

    //FUNÇAO PARA ADCIONAR PERGUNTAS/RESPOSTAS
    printf("adcionar ou ir pro quiz ?\n");
    scanf("%d",&n3);

    if (n3==1)
    {
        while(n2==1)
        {
            printf("Adcionar perguntas\n");
            scanf("%[^\n]",&q_pergunta);
            getchar();
            
            for (int i = 0; i <149 ; i++)
            {
                perguntas[i].enunciado = q_pergunta;
            }
            for (int i = 0; i<4; i++)
            {
                printf("adcionar %i/4 alternativa",i+1);

                for (int j = 0; j<149; j++)
                {
                    perguntas[1].respostas[i] = alternativa[j];
                    printf("%c",perguntas[1].respostas[i] = alternativa[j]);
                }         
                break;break;break;
            }
        } 
    }
    else if(n3 == 2)
    {
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=iniciando Quiz...=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        while(n2==1)
        {
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

            printf("%[^\n]",&perguntas[0].enunciado);
            printf("pipipopopo...\n");
            scanf("%d",&n1);

            switch (n1)
            {
                case 1:
                    for (int i = 0 ; i<149 ; i++)
                    {
                        printf("s",perguntas[0].respostas[i]);   
                    }
                    break;
                    
                case 2:
                    printf("s",perguntas[0].enunciado);
                    break;
                case 3:
                    printf("s",perguntas[0].enunciado);
                    break;
                case 4:
                    printf("s",perguntas[0].enunciado);
                    break;

            }
            
            n2=2;
        }
    }

}