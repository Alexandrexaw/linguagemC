#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int vereador111 = 0, vereador222 = 0, vereador333 = 0, votoNulo444 = 0,  prefeito11 = 0, prefeito22 = 0, votoNulo44 = 0, opcaoDigitada = 0, candidatoVereador = 0, candidatoPrefeito = 0;
	setlocale(LC_ALL, "Portuguese");
	
	while(1){
		system("cls");
		printf("Apuração de votos UniCesumar 2021\n\n");
		printf("\nSelecione uma das opções abaixo: \n");
		printf("\n Digite 1 para VOTAR: \n Digite 2 para efetuar a apuração parcial de VOTOS: \n Digite 3 para SAIR e encerrar a contabilização: \n\n");
		scanf("%d", &opcaoDigitada);
		switch(opcaoDigitada){
			
			case 1:
				system("cls");
				printf("\nDigite o número do candidato(a) a Vereador(a) e pressione ENTER: \n\n111 - João do Frete\n222 - Maria da Pamonha\n333 - Zé da Farmácia\n444 - Voto Nulo\n\n" );
				scanf("%d", &candidatoVereador);
				fflush(stdin);
				switch(candidatoVereador){
					case 111:
						printf("\n\nVoto computado para o candidato a Vereador João do Frete\n\n");
						vereador111++;
						break;
					case 222:
						printf("\n\nVoto computado para a candidata a Vereadora Maria da Pamonha.\n\n");
						vereador222++;	
						break;
					case 333:
						printf("\n\nVoto computado para o candidato a Vereador Zé da Farmácia.\n\n");
						vereador333++;
						break;
					case 444:
						printf("\n\nVoto Nulo!\n\n");
						votoNulo444++;
						break;
					default:
						printf("\n\nOpção inválida!\n\n");
						system("pause");
						break;
				}
			system("pause");
			system("cls");
			printf("\nDigite o número do candidato a Prefeito e pressione a tecla ENTER: \n\n11 - Dr. Zureta\n22 - Senhor Gomes\n44 - Voto Nulo\n");
			scanf("%d", &candidatoPrefeito);
			fflush(stdin);
			switch(candidatoPrefeito){
				case 11:
					printf("\n\nVoto computado para o candidato a Prefeito Dr. Zureta.\n\n");
					prefeito11++;
					break;
				case 22:
					printf("\n\nVoto computado para o candidato a Prefeito Senhor Gomes.\n\n");
					prefeito22++;
					break;
				case 44:
					printf("\n\nVoto Nulo!\n\n");
					votoNulo44++;
					break;
				default:
					printf("\n\nOpção inválida!\n\n");
					break;
			}
			system("pause");
			break;
				
			case 2:
				system("cls");
				printf("\nSegue os votos contabilizados até o momento: \n");
				printf("\nCandidatos a Vereador: \n\n111 - João do Frete com o total de %d votos\n", vereador111);
				printf("\n222 - Maria da Pamonha com o total de %d votos\n", vereador222);
				printf("\n333 - Zé da Farmácia com o total de %d votos\n", vereador333);
				printf("\nTotal de votos NULO: %d\n", votoNulo444);
				printf("\n\nCandidatos a Prefeito: \n\n11 - Dr. Zureta com o total de %d votos\n", prefeito11);
				printf("\n22 - Senhor Gomes com o total de %d votos\n", prefeito22);
				printf("\nTotal de votos NULO: %d\n", votoNulo44);
				system("pause");
				break;
			case 3:
				printf("\n\nContabilização encerrada!");
				exit(3);
	    		return 3;	
		}
	}
}

