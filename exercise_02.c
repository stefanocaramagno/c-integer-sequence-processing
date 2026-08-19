/*
----------------------------------------------------------------
Consegna:
- Scrivere un programma che stampa la somma di una sequenza di 
  numeri interi,diversi da 0, inseriti dall’utente chiusa da 0. 
----------------------------------------------------------------
*/

#include <stdio.h>
int main(void)
{
	int N;
	int Somma;
	Somma=0;
	while(1){
		// Si legge il valore numerico
		printf("Inserire un numero: ");
	    scanf("%d",&N);
	    // Si aggiunge il valore numerico alla somma solo se è diverso da 0
		if(N!=0){
			Somma=Somma+N;
		}
		else break;
	}
	printf("\nSOMMA = %d",Somma);
}

