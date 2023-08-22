/******************************************************************************

descobrindo os fatores primos de um numero

*******************************************************************************/
#include <stdio.h>


int main()
{
    int i;
    long long int n;
    
    printf("Digite um numero n:\n");
    scanf("%lld", &n);

    for(i=2; i<=n; i++){
        if(n%i==0){
            printf("%d ", i);
            n = n/i;
        }
        
    }

    return 0;
}
