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
    int correct = rand()%3;
    strcpy(listQuestion[correct][150],question.alternativa_correta);

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Questao\n");
    printf("%s\n",question.enunciado);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("alternativas: \n");
    printf("1- %s\n",question.alternativa_correta);
    printf("2- %s\n",question.alternativa2);
    printf("3- %s\n",question.alternativa3);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");



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

    perguntas[0] = addQuestion(perguntas[0], "propolis");
    printQuestion(perguntas[0]);

    
}

