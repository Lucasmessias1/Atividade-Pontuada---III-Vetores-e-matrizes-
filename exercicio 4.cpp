#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int i, numero[5], somageral = 0, quantidade = 0, somaPar = 0, pares = 0, somaImpar = 0, impares = 0, maiornumero = 0, menornumero = 9999999999, contadornegativo = 0, contadorpositivo = 0;
    float mediaPar = 0, mediaImpar = 0, mediatotal = 0;



    for (i = 0; i < 5; i++) {
        printf("Digite o %d número: ", i +1);
        scanf("%d", &numero[i]);
        quantidade++;

        somageral += numero[i];

		//verificando o maior e o menor peso.
        maiornumero = maiornumero > numero[i] ? maiornumero : numero[i];
        menornumero = menornumero < numero[i] ? menornumero : numero[i];

		//verificando a soma dos numeros pares e impares.
        if (numero[i] % 2 == 0) {
            pares++;
            somaPar += numero[i];
        } else {
            impares++;
            somaImpar += numero[i];
        }

		//verificando os numeros negativos e positivos.
        if (numero[i] < 0) {
            contadornegativo++;
        } else if (numero[i] > 0) {
            contadorpositivo++;
        }
    }
	//media dos números.
    mediatotal = somageral / quantidade;

    // Expondo dados ao usúarios.
    printf("A quantidade de números ímpares: %d \n", impares);
    printf("A quantidade de números negativos: %d \n", contadornegativo);
    printf("O maior número: %d \n", maiornumero);
    printf("O menor número: %d \n", menornumero);
    printf("A média de todos os números inseridos: %.1f \n", mediatotal);

    return 0;
}
