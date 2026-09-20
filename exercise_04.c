/*
-------------------------------------------------------------
Scrivere un programma che stampi il numero di elementi pari 
in una sequenza di interi inseriti dall’utente chiusa da ---1 
-------------------------------------------------------------
*/

#include <stdio.h>
int main(void)
{
	int N;
	while(N!=-1){
		printf("Inserisci un numero: ");
		scanf("%d",&N);
		if(N%2==0){
			printf("Valore Stampato: %d\n",N);
		}
	}
}

