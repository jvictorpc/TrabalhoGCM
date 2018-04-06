#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char resposta1[141], resposta2[141], resposta3[141], resposta4[141], resposta5[141];
	setlocale(LC_ALL,"portuguese");
	printf("Qual seu nome?\n");
	scanf("%s",&resposta1);
	system("cls");
	printf("Qual a sua idade?\n");
	scanf("%s", &resposta2);
	system("cls");
	printf("Você gosta de vacas?\n");
	scanf("%s", &resposta3);
	system("cls");
	printf("Qual o seu tipo sanguineo?\n");
	scanf("%s", &resposta4);
	system("cls");
	printf("Qual seu tipo de musica favorito?\n");
	scanf("%s", &resposta5);
	system("cls");
	
	return 0;
}
