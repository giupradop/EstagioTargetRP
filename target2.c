/*2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;*/

#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, tam, cont = 0;

    printf("Digite uma string: ");
    gets(string);

    tam = strlen(string);

    for (i = 0; i < tam; i++) {
        if (string[i] == 'a' || string[i] == 'A') {
            cont++;
        }
    }

    printf("A letra 'a' aparece %d vezes na string\n", cont);

    return 0;
}