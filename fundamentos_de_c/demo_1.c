#include <stdio.h>
#define SUCESSO     (0)

int main(int argc, char ** argv){
    int escolha;
    char lixo;

    printf("Qual opcao desejas?\n"
            "1 - Ser feliz\n"
            "2 - Ser rico\n"
            "3 - Ser famoso\n"
            "4 - Ser amad@\n");
    scanf("%d%c", &escolha, &lixo);

    switch(escolha){ // faz a verificação das condições dentro da variável 'escolha'
        case 1:             // abre a condicao
            printf("(:");   // codigo da condicao
        break;              // encerra a condicao, analogo ao }
        case 2:
            printf("$$$$");
        break;
        case 3:
            printf("ME DA UM AUTOGRAFO??!");
        break;
        case 4:
            printf("Nossa bb kkkkkk saudade do que a gente nao viveu ainda di vdd 9vinha");
        break;
        default:
            printf("Opcao invalida"); // default compreende qualquer opcao EXCETO as que voce ja estabeleceu
        break;

    }
    
    return SUCESSO;
}