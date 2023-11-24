#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    //variaveis utilizadas 
    char nomes[5][200];
    float idade[5];
	float peso[5];
	float altura[5];
    float maioridade = 0, menoridade = 9999, maiorpeso = 0, menorpeso = 9999, maioraltura = 0, menoraltura = 999;
    int indexmaxIdade, indexminIdade, indexmaxPeso, indexminPeso, indexmaxAltura, indexminAltura; 
    int i;
    
    //pedindo informações para usúario.
    for (i = 0; i < 5; i++) {
        fflush(stdin);
         printf("%dº nome: ", i + 1);
         gets(nomes[i]);

         printf("Digite sua idade: ");
         scanf("%d", &idade[i]);

         printf("Digite seu peso: ");
         scanf("%f", &peso[i]);

         printf("Digite sua altura: ");
         scanf("%f", &altura[i]); 

         //Verificando o Maior e menor idade.
         maioridade = maioridade > idade[i] ? maioridade : idade[i];
         menoridade = menoridade < idade[i] ? menoridade : idade[i];

         //Verificando o Maior e menor peso.
         maiorpeso = maiorpeso > peso[i] ? maiorpeso : peso[i];
         menorpeso = menorpeso < peso[i] ? menorpeso : peso[i];

         //Verificando o Maior e menor altura.
         maioraltura = maioraltura > altura[i] ? maioraltura : altura[i];
         menoraltura = menoraltura < altura[i] ? menoraltura : altura[i];
        }
		
		//Mostrandodados para o usuario.
       for (i = 0; i < 5; i++) {
    	printf("\n\n\n");
    	printf("nome: %s\n", nomes[i]);
    	printf("idade: %.0f \n", idade[i]);
    	printf("peso: %.2f \n", peso[i]);
    	printf("altura: %.2f\n\n\n", altura[i]);
        
        // Operações do código ternaria
        indexmaxIdade = idade[i] == maioridade? i : 0;
		indexminIdade = idade[i] == menoridade ? i : 0;  
        indexmaxPeso = peso[i] == maiorpeso ? i : 0;
		indexminPeso = peso[i] == menorpeso ? i : 0;  
        indexmaxAltura = altura[i] == maioraltura ? i : 0;
		indexminAltura = altura[i] == menoraltura ? i : 0;
	}
	
	
    printf("O nome e a altura da pessoa mais alta e a mais baixa");
    printf("\n");
	printf("maior altura \n");
    printf("nome: %s\n", nomes[indexmaxAltura]);
	printf("idade: %.0f\n", idade[indexmaxAltura]);
	printf("peso: %.2f\n", peso[indexmaxAltura]);
	printf("altura: %.2f", altura[indexmaxAltura]);
    
    printf("\n");
	printf("menor altura: \n");
	printf("nome: %s \n", nomes[indexminAltura]);
	printf("idade: %.0f \n", idade[indexminAltura]);
	printf("peso: %.2f \n", peso[indexminAltura]);
	printf("altura: %.2f \n", altura[indexminAltura]);

    printf("O nome e o peso da pessoa com maior peso e menor peso");
    printf("\n");
	printf("maior peso: \n");
	printf("nome: %s \n", nomes[indexmaxPeso]);
	printf("idade: %.0f \n", idade[indexmaxPeso]);
	printf("peso: %.2f \n", peso[indexmaxPeso]);
	printf("altura: %.2f", altura[indexmaxPeso]);
	
	printf("\n");
	printf("menor peso: \n");
	printf("nome: %s \n", nomes[indexminPeso]);
	printf("idade: %.0f \n", idade[indexminPeso]);
	printf("peso: %.2f \n", peso[indexminPeso]);
	printf("altura: %.2f \n", altura[indexminPeso]);

    printf("O nome a idade da pessoa com mais idade e com menos idade");
    printf("\n");
	printf("maior idade: \n");
	printf("nome: %s \n", nomes[indexmaxIdade]);
	printf("idade: %.0f \n", idade[indexmaxIdade]);
	printf("peso: %.2f \n", peso[indexmaxIdade]);
	printf("altura: %.2f", altura[indexmaxIdade]);	
	
	printf("\n");
	printf("menor idade: \n");
	printf("nome: %s \n", nomes[indexminIdade]);
	printf("idade: %.0f \n", idade[indexminIdade]);
	printf("peso: %.2f \n", peso[indexminIdade]);
	printf("altura: %.2f \n", altura[indexminIdade]);
	
    return 0;
}
