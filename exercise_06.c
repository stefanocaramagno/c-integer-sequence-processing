/*
--------------------------------------------------------------------------------------------
Scrivere un programma che stampi come output il numero di elementi dispari presenti in una 
sequenza di interi chiusa da 0. 
Il programma deve inoltre calcolare e stampare la percentuale di elementi dispari
--------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main(void){
	int N;
	int NumeriDispari;
	int Contatore;
	float Percentuale;
	Contatore=0;
	NumeriDispari=0;
	do{
		printf("Inserisci un Numero: ");
	    scanf("%d",&N);
	    if(N%2!=0){
			NumeriDispari=NumeriDispari+1;
		}
		Contatore=Contatore+1;
	} while(N!=0);

    printf("\nI Numeri Dispari sono: %d",NumeriDispari);
    Percentuale=(NumeriDispari*100)/(Contatore-1);
    printf("\nLa Percentuale dei Numeri Dispari inseriti e': %.2f",Percentuale);
}

