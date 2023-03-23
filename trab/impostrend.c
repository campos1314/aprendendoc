#include <stdio.h>

float impostsal(float rendaanual){
    float rendmens;
    rendmens = rendaanual/12;
    
    if(rendmens < 3000){
        return 0;
    }else if(rendmens >= 3000 && rendmens < 5000){
        return rendmens*0.10;
    }else{
        return rendmens*0.20;
    }
}

float impostserv(float rendaprestas){
    if (rendaprestas <= 0){
        return 0;
    }else{
        return rendaprestas*0.15;
    }
}

float impostcapita(float rendaganhocapit){
    if (rendaganhocapit <= 0){
        return 0;
    }else{
        return rendaganhocapit*0.20;
    }
}

float questsaude(float gastomedico, float gastoeduc, float impostobruto){
    float maxabatim, somabat;
    somabat = gastomedico + gastoeduc;
    maxabatim = impostobruto*0.30;
    
    if(maxabatim > somabat){
        return somabat;
    }else{
        return maxabatim;
    }
    
}

void impritudo(float impostsalario, float impostservico, float impostocapital, float impostobruto, float somabat, float questdasaude){
    float imposto = impostobruto-questdasaude;
    printf("\nRELATÓRIO DE IMPOSTO DE RENDA");
    printf("\nCONSOLIDADO DE RENDA:");
    
    printf("\nImposto sobre salário: %.2f", impostsalario);
    printf("\nImposto sobre serviços: %.2f", impostservico);
    printf("\nImposto sobre ganho de capital: %.2f", impostocapital);
    
    printf("\nDEDUÇÕES:");
    printf("\nMáximo dedutível: %.2f", questdasaude);
    printf("\nGastos dedutíveis: %.2f", somabat);
    
    printf("\nRESUMO:");
    printf("\nImposto bruto total: %.2f", impostobruto);
    printf("\nAbatimento: %.2f", questdasaude);
    printf("\nImposto devido: %.2f", imposto);
} 

int main()
{
    float rendaanual, rendaprestas, rendaganhocapit, gastomedico, gastoeduc, somabat;
    float impostsalario, impostservico, impostocapital, questdasaude, impostobruto;
    
    //perguntas
    printf("Qual é sua renda anual com salário: ");
    scanf("%f", &rendaanual);
    printf("Qual é sua renda anual com prestação de serviço: ");
    scanf("%f", &rendaprestas);
    printf("Qual é o seu ganho de capital: ");
    scanf("%f", &rendaganhocapit);
    printf("Qual é o seus gastos médicos: ");
    scanf("%f", &gastomedico);
    printf("Qual é o seus gastos educacionais: ");
    scanf("%f", &gastoeduc);
    
    //atribuindo
    impostsalario = impostsal(rendaanual);
    impostservico = impostserv(rendaprestas);
    impostocapital = impostcapita(rendaganhocapit);

    
    impostobruto = impostsalario + impostservico + impostocapital;
    somabat = gastomedico + gastoeduc;
    questdasaude = questsaude(gastomedico, gastoeduc, impostobruto);
    
    
    
    impritudo(impostsalario, impostservico, impostocapital, impostobruto, somabat, questdasaude);
    
    return 0;
}
