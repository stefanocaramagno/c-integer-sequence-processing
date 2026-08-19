/*
-----------------------------------------------------------------------------
Si scriva un programma in linguaggio C per calcolare la media aritmetica 
dei numeri pari presenti in una serie di N numeri inseriti da tastiera. 
-----------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void)
{
	int N,X,Contatore,Somma,Contatore_Numeri_Pari,Media;
	printf("Quanti numeri vuoi inserire? ");
	scanf("%d",&N);
	Contatore=0;
	Somma=0;
	Contatore_Numeri_Pari=0;
	while(Contatore<N){
		printf("Inserisci un valore numerico: ");
		scanf("%d",&X);
		if(X%2==0){
		Somma=Somma+X;
		Contatore_Numeri_Pari=Contatore_Numeri_Pari+1;
	    }
	Contatore=Contatore+1;
	}
	Media=Somma/Contatore_Numeri_Pari;
	printf("\nMEDIA= %d",Media);
}

