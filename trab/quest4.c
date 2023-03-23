#include <stdio.h>

int main() 
{
    int n1, n2, n3;
    printf("Digite três números: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if(n1 > n2 && n1 > n3) {
        printf("%d é o maior número.", n1);
    }
    if(n2 > n1 && n2 > n3) {
        printf("%d é o maior número.", n2);
    }
    else {
        printf("%d é o maior número.", n3);
    }
    
    return 0;
}