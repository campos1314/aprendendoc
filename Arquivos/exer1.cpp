/**
Encontrando a soma dos multiplos de 3 e 5 menores que 1000
*/
#include <iostream>

using namespace std;

int main()
{
    int i, soma=0, n;
    std::cout<<"Encontrando a soma dos multiplos de 3 ou 5\n";
    std::cout<<"Digite a que numero vc quer encontrar: ";
    std::cin>>n;
    
    for(i=0; i<n; i++){
        if(i%3==0||i%5==0){
            soma += i;
        }
    }    
    std::cout<<"A soma: "<<soma<<std::endl;
    return 0;
}