#include <stdio.h> //padrão
#include <stdlib.h> //necessário para o rand
#include <time.h> //necessário para o rand
#include <string.h> //necessário para strcpy

//UserTypes: 1 - User | 2 - Adm | 3 - Farma

//--------------------------------------------------------------------------//
//--------------------------Funções do Usuário------------------------------//
//--------------------------------------------------------------------------//
//--------------------------Struct de Usuário-------------------------------//
//--------------------------------------------------------------------------// 

typedef struct Users
{
    char cpf[11];
    int userType;
    int isActive; //utilizado para deleção lógica
}User;

int usersResgistereds = 0;

//--------------------------------------------------------------------------//
//---------------------------Função de adição-------------------------------//
//--------------------------------------------------------------------------//

User addUser(char *cpf, int userType)
{
    User user;
    strcpy(user.cpf, cpf);
    user.userType = userType;
    user.isActive = 1;
    usersResgistereds++;

    return user;           
}

//--------------------------------------------------------------------------//
//----------------------Função de verificação-------------------------------//
//--------------------------------------------------------------------------//

int verifyUser(char * cpf, User users[])
{
   int exists = 0;

    for (int i = 0; i < usersResgistereds; i++)
    {
        if(strstr(users[i].cpf, cpf) != NULL && users[i].isActive == 1)
        {
            exists = 1;
            break;
        }
    }
    

   return exists;
}

//--------------------------------------------------------------------------//
//-------------------------Função de deleção--------------------------------//
//--------------------------------------------------------------------------//

User deleteUser(User user){
    user.isActive = 0;
    usersResgistereds--;

    return user;
}

//--------------------------------------------------------------------------//
//---------------------------Funções do Quiz--------------------------------//
//--------------------------------------------------------------------------//
//----------------------------Struct do Quiz--------------------------------//
//--------------------------------------------------------------------------//

typedef struct Question
{
    char enunciado[150];
    char alternativa_correta[150];
    char alternativa2[150];
    char alternativa3[150];
}Question;

//--------------------------------------------------------------------------//
//---------------------------Função de Adição-------------------------------//
//--------------------------------------------------------------------------//

Question addQuestion(Question questions, char *enunciado)
{
    strcpy(questions.enunciado,enunciado);
    strcpy(questions.alternativa_correta,"resposta correta");
    strcpy(questions.alternativa2,"resposta incorreta 1");
    strcpy(questions.alternativa3,"resposta incorreta 2");
    
    return questions;
}

//--------------------------------------------------------------------------//
//-------------------------Função de Impressão------------------------------//
//--------------------------------------------------------------------------//

void printQuestion(Question question)  
{
    char answers[3][150];
    int correctAlt, secondAlt, thirdAlt;

    correctAlt = rand()%3;
    do{
        secondAlt = rand()%3;
    }while(secondAlt == correctAlt);
    do
    {
        thirdAlt = rand()%3;
    } while (thirdAlt == correctAlt || thirdAlt == secondAlt);

    strcpy(answers[correctAlt],question.alternativa_correta);
    strcpy(answers[secondAlt],question.alternativa2);
    strcpy(answers[thirdAlt],question.alternativa3);
    

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Questao\n");
    printf("%s\n",question.enunciado);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("alternativas: \n");
    printf("1- %s\n",answers[0]);
    printf("2- %s\n",answers[1]);
    printf("3- %s\n",answers[2]);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    answerQuestion(question, correctAlt);
}

//--------------------------------------------------------------------------//
//--------------------------Função de Resposta------------------------------//
//--------------------------------------------------------------------------//

void answerQuestion(Question question, int answer)
{
    int userAnswer;

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Sua resposta:\n");
    scanf("%d",&userAnswer);
    getchar();
    if (userAnswer == answer)
    {
        printf("Correto!!!\n");
    }
    else
    {
        printf("Incorreto\n");
        printf("A resposta correta é: %d\n", answer);
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}


//--------------------------------------------------------------------------//
//---------------------Funções de Tele-atendimento--------------------------//
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

int AumentarAudio(int volume)                 //Trocar no fluxograma essa função de void por int
{
    if (volume<=90)
    {
        volume = volume + 10;
    }
    return volume;  
}

int DiminuirAudio(int volume)                 //Trocar no fluxograma essa função de void por int
{
    if (volume>=10)
    {
        volume = volume - 10;
    }
    

    return volume;
}

int LigarCam(int camera)                      //Testado // camera ja irá vir desligada( camera = OFF)
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

int DesligaCam(int camera)                                                                  //Testado
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

void ReceberMsg(int num)                                                                    //Testado
{
    switch (num)
    {
    case 1:
        printf("O medicamento XXX e o recomendavel a voce\n\n");
        break;
    case 2:
        printf("Voce deve toma-lo em 8 em 8 horas por 5 dias\n\n");
        break;
    case 3:
        printf("Nao e recomendavel pelos medicos faze-lo\n\n");
        break;
    }
}

void EnviarMsg()                              //testado
{
    int num;

    printf("Digite o numero da pergunta\n");
    printf("1 - estou com sintomas gripais qual medicamento eu devo tomar ?\n");
    printf("2 - Como devo tomar o  medicamento XXX ?\n");
    printf("3 - Nao estou mais sentido os sintomas que estava antes, posso parar de tomar o remedio ?\n");
    scanf("%i",&num);
    getchar();

    ReceberMsg(num);
}


int ConectarMic(int mic)                      //ja testado
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

int DesconectarMic(int mic)                   //Ja testado
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