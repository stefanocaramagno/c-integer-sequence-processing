/*
-------------------------------------------------------------
Consegna:
- Scrivere un programma che stampa la somma di una sequenza 
  di N numeri interi inseriti dall’utente.  
-------------------------------------------------------------
*/

#include <stdio.h>
int main(void)
{
	int N;
	int Somma;
	Somma=0;
	while(N>0){
		printf("Inserisci un numero: ");
		scanf("%d",&N);
		Somma=Somma+N;
	}
	printf("\nSOMMA = %d",Somma);
}

