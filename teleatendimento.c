#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main()
{
    int volume = 0;
    int num;

    int mic = 1;
    int cam = 1;

    /*
    volume = AumentarAudio(volume);
    printf("%d\n",volume);
    volume = AumentarAudio(volume);
    printf("%d\n",volume);
    volume = DiminuirAudio(volume);
    printf("%d\n",volume);
    volume = DiminuirAudio(volume);
    printf("%d\n",volume);
    num = EnviarMsg();
    ReceberMsg(num);
    

    mic = ConectarMic(mic);
    mic = ConectarMic(mic);
    mic = DesconectarMic(mic);
    mic = DesconectarMic(mic);
    */
    cam = LigarCam(cam);
    cam = LigarCam(cam);
    cam = DesligaCam(cam);
    cam = DesligaCam(cam);


    return 0;
}
    
    
    