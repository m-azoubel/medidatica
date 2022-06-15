#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "medidatica.c"


int main()
{
    srand(time(NULL));
    
    Question perguntas[10];

    int answer;
    int Msg;
    int mic = 1;
    int cam = 1;
    int audio = 1;

    //perguntas[0] = addQuestion(perguntas[0],"O uso de antibioticos: ");

    //answer = printQuestion(perguntas[0]);

    //answerQuestion(perguntas[0],answer);

    //printf("%d\n",answer);

    //Referente ao teleatendimento

    /*IniciarChamada();
    FecharChamada();
    ConectarAudio();
    mic = ConectarMic(mic);
    mic = ConectarMic(mic);
    mic = DesconectarMic(mic);
    mic = DesconectarMic(mic);
    cam = LigarCam(cam);
    cam = LigarCam(cam);
    cam = DesligaCam(cam);
    cam = DesligaCam(cam);
    */EnviarMsg();
    //DesconectarAudio();
    
    
    return 0;
}

