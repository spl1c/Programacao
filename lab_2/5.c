#include <stdio.h>

#define RADIO_WAVES 3e9
#define MICROWAVES 3e12
#define INFRARED_LIGHT 4.3e14
#define VISIBLE_LIGHT 7.5e14
#define ULTRAVIOLET_LIGHT 3e17
#define XRAY 3e19
#define GAMMA_RAYS 3e19

void radiacao(double frequency){
    if (frequency < RADIO_WAVES)
    {
        printf("Radio waves\n");
    }
    else if (frequency < MICROWAVES)
    {
        printf("Microwaves\n");
    }
    else if (frequency < INFRARED_LIGHT)
    {
        printf("Visible_light\n");
    }
    else if (frequency < ULTRAVIOLET_LIGHT)
    {
        printf("Ultraviolet light\n");
    }
    else if (frequency < XRAY)
    {
        printf("X-ray\n");
    }
    else
    {
        printf("Gamma rays\n");
    }
}
int main(){

    double frequency;

    printf("Escreve uma frequência: ");
    scanf("%lf", &frequency);
    radiacao(frequency);
    return 0;
}