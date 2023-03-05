#include <stdio.h>

float convetkmtm(float km){
    float m;
    m = km/3.6;
    return m;
}
float convetmtkm(float m){
    float km;
    km = m*3.6;
    return km;
}

int main()
{
    int toc;
    float m, km;
    printf("Digite 0 para converter de km/h para m/s\nDigite 1 para converter de m/s para km/h\n");
    scanf("%d", &toc);
    if (toc == 0){
        printf("Vamos converter de km/h para m/s\nQual é a velocidade em km/h? ");
        scanf("%f", &km);
        m = convetkmtm(km);
        printf("%.2f", m);
    }else{
        printf("Vamos converter de m/s para km/h\nQual é a velocidade em m/s? ");
        scanf("%f", &m);
        km = convetmtkm(m);
        printf("%.2f", km);
    }

    return 0;
}
