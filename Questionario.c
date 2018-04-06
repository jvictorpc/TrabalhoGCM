#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char res1[141], res2[141], res3[141], res4[141], res5[141];
	setlocale(LC_ALL,"portuguese");
	printf("QUESTIONÁRIO CINÉFILO\n");
	printf("__________________________________________________\n");

	printf("\nQuem dirigiu 2001: Uma odisséia no espaço?");
	scanf("%s", &res1[141]);
	system("cls");
	printf("\nQuantas cenas improvisadas tiveram em senhor dos anéis? ");
	scanf("%s", &res2[141]);
	system("cls");	
	printf("\nEscreva o nome do melhor amigo de Han Solo, sem pesquisar no google:");
	scanf("%s", &res3[141]);
	system("cls");	
	printf("\nQuantos anos boyhood demorou pra ser filmado?");
	scanf("%s", &res4[141]);
	system("cls");	
	printf("\nQual o melhor filme do Adam Sandler? ");
	scanf("%s", &res5[141]);
	system("cls");	
	printf("As respostas corretas são:");
	printf("\nPergunta 1: Stanley Kubrick;\nPergunta 2: ;\nPergunta 3: Chewbacca;\nPergunta 4: 12 anos; \nPergunta 5: Punch Drunk Love;");
	printf("\nPergunta 1: %s;\nPergunta 2: %s;\nPergunta 3: %s;\nPergunta 4: %s; \nPergunta 5: %s;", &res1, &res2, &res3, &res4, &res5);
	
	return 0;
}
