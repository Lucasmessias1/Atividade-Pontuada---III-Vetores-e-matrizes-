#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    char nomes[5][100];
    float notas[5][3];
    float somas[5], medias[5];
    int i, j;
    
    for(i=0; i<5; i++){
        fflush(stdin);
        printf("nome: ");
        gets(nomes[i]);
		for(j=0; j<3; j++){
        	printf("nota: ");
        	scanf("%f", &notas[i][j]);
        	somas[i] += notas[i][j];
		    	
		}
		medias[i] = somas[i]/3;
		       
		
	}
	printf("\n\n\n");
	for(i=0;i<5;i++){
		printf("nome: %s\n", nomes[i]);
		for(j=0;j<3;j++){	
			printf("nota %iª: %.2f\n", i, notas[i][j]);
		}
		printf("media: %.2f\n", medias[i]);
	
		if (medias[i] >=7){
			printf("Aprovado! \n");
		}else if (medias[i] >=5){
			printf("recuperação! \n");
		} else {
			printf ("reprovado! \n");
		}
	
	}
	return 0;
}
