#include <stdio.h>

int main() {
    int numero, invertido;
    printf("Esse programa dá o número invertido!\n");
    printf("Digite um numero entre 100 e 999: ");
    scanf("%d", &numero);
    //Mais um comentário
    // Verifica se o número está dentro do intervalo
    if (numero < 100 || numero > 999) {
        printf("Erro: Numero fora do intervalo!\n");
    } else {
        // Inverte o número
        int unidade = numero % 10;         // Último dígito
        int dezena = (numero / 10) % 10;   // Dígito do meio
        int centena = numero / 100;        // Primeiro dígito

        invertido = unidade * 100 + dezena * 10 + centena;

        printf("Numero invertido: %d\n", invertido);
    }

    return 0;
}
