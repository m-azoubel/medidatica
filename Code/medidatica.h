#ifndef MEDIDATICA_H_   
#define MEDIDATICA_H_

/*---------------------------------------------------------*/
/*                          Structs                        */
/*---------------------------------------------------------*/

typedef struct Users
{
    char name[50];
    char cpf[11];
    int userType;    
}User;

typedef struct Question
{
    char enunciado[150];
    char alternativa_correta[150];
    char alternativa2[150];
    char alternativa3[150];
}Question;

/*---------------------------------------------------------*/
/*                         Functions                       */
/*---------------------------------------------------------*/

User addUser(char *cpf, int userType, User* users);

int verifyUser(char * cpf, User* users);

Question addQuestion(Question questions, char *enunciado);

void IniciarChamada();

void FecharChamada();

void ConectarAudio();

void DesconectarAudio();

int AumentarAudio(int volume);

int DiminuirAudio(int volume);

int LigarCam(int camera);

int DesligaCam(int camera);

int EnviarMsg();

void ReceberMsg(int num);

int ConectarMic(int mic);

int DesconectarMic(int mic);



#endif // 