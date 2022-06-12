#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct Question
{
    char enunciado[150];
    char alternativa_correta[150];
    char alternativa2[150];
    char alternativa3[150];
}Question;

int printQuestion(Question question)
{
    char listQuestion[3][150];
    int alt2, alt3;
    int correct = rand()%3;

    strcpy(listQuestion[correct],question.alternativa_correta);

    do{
        alt2 = rand()%3;
    }while(alt2 == correct);
    do
    {
        alt3 = rand()%3;
    } while (alt3 == correct || alt3 == alt2);
    
    strcpy(listQuestion[alt2],question.alternativa2);
    strcpy(listQuestion[alt3],question.alternativa3);


    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Questao\n");
    printf("%s\n",question.enunciado);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("alternativas: \n");
    printf("1- %s\n",listQuestion[0]);
    printf("2- %s\n",listQuestion[1]);
    printf("3- %s\n",listQuestion[2]);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    return correct;
} 

Question addQuestion(Question questions, char *enunciado)
{
    strcpy(questions.enunciado,enunciado);
    strcpy(questions.alternativa_correta,"pipipi popopo");
    strcpy(questions.alternativa2,"pipipi popopo2");
    strcpy(questions.alternativa3,"pipipi popopo3");
    
    return questions;
}

int main()
{
    srand(time(NULL));

    Question perguntas[2];

    int userAnswer;

    perguntas[0] = addQuestion(perguntas[0], "propolis");
    int answer = printQuestion(perguntas[0]);

    scanf("%d", &userAnswer);
    getchar();

    if (answer == (userAnswer-1))
    {
       printf("Voce acertou!");
    }else{
        printf("Voce errou!");
    }
}

