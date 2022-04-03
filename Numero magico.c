#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	int palpite;
	int magico;
	srand(time(NULL));
	
	setlocale(LC_ALL, "Portuguese");
	
	
	magico = rand()%10;
	
		while(palpite != magico){
		printf("\nAdvinhe o número mágico: ");
	    scanf("%d", &palpite);
		palpite == magico ? printf("Acertou") : printf("Errou");
		palpite > magico ? printf("\nNumero alto demais") : (" ");
		palpite < magico ? printf("\nNumero baixo demais") : (" ");
	}

	return 0;
}
