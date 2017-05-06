#include <stdio.h>
#include <time.h>

#include "tree/treeABR_func.h"

int main()  {
	int choiceMenu;

    srand(time(NULL));		//funzione per la generazione casuale di valori
	
	do	{
		io_clearScreen();
		printf("\t\t\tProgetto 2 - Gruppo 32 - MENU INTRODUTTIVO\n");

		printf("1. Gestione singolo albero\n");
		printf("2. Calcolo altezza media degli alberi\n");
		printf("3. Esci\n");
		printf("\n\n");
		do {
			printf("SCELTA: ");
			if((choiceMenu = io_getInteger()) < 1 || choiceMenu > 3) //nel caso l'utente inserisca una scelta del menu non presente
				printf("ATTENZIONE: Valore non valido\n\n");
		}while(choiceMenu < 1 || choiceMenu > 3);
		io_clearScreen();
		switch(choiceMenu)	{
			case 1:
				treeABR_func_main();
				break;
			case 2:
				printf("CALCOLO ALTEZZA MEDIA ALBERI\n\n");
                treeABR_func_average();
				break;
			case 3:
				printf("\n");
				printf("SESSIONE TERMINATA\n\n");
		}
		io_pressKey();
	}while(choiceMenu != 3);

	io_clearScreen();
	return 1;
}
