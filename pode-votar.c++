
#include <stdio.h>

int ano;

int main() {
    
    printf("Chuque se voce tem idade para votar:\n\n");
    printf("Digite o ano de seu nascimento:\n");
    scanf("%i", &ano);
    
    ano = 2022 - ano;
    
    if (ano >= 16) {
        printf("\n\nVoce pode votar!");
    }
    else {
        printf("\n\nVoce ainda nao pode votar :(");
    }
    
    return 0;
}
