#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {

	int cartelaBingo[10],quantiaDeCartelas, numero, verificador, i, l, j, k;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite a quantidade de cartelas de Bingo a serem geradas: ");
    scanf("%d", &quantiaDeCartelas);
    system("cls");
    fflush(stdin);
	srand(time(NULL));
	
	verificador = 0;
	for(i = 0 ; i < quantiaDeCartelas; i++){
	
		for(j=0; j<10; j++){
			numero = (rand() % 99);
			
			for(k = 0; k<= j-1; k++){
				if(numero == cartelaBingo[k]){
					verificador = 1;
					break;
				}
			}
			if(verificador ==1){
				verificador = 0;
				j = j-1;
			}else{
				cartelaBingo[j] = numero;		
			}	
		}
		printf("Cartela número %d : ", i+1);
		for(l = 0 ; l < 10 ; l++){
			printf(" %d ", cartelaBingo[l]);
		}
		printf("\n\n");
	}	
}
