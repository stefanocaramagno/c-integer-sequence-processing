/*
----------------------------------------------------------------------------
Scrivere un programma C ansi che dato in ingresso un valore intero N, 
legge N valori interi, calcola e stampa a video la media dei valori letti
che sono multipli di 5.

Esempio dato il valore N = 5, e la sequenza di valori 
12 -- 10 -- 5 -- 2 -- 20 
calcola la media dei valori 10, 5 e 20 e stampa il risultato
(10+5+20)/3 = 11.6 

Suggerimento: un numero è multiplo di 5 se diviso per 5 ha come resto zero
----------------------------------------------------------------------------
*/

#define _CRT_SECURE_NO_WARNINGS //Stringa necessaria per Visual Studio
#include <stdio.h>
int main() {
    int N;  //numero degli elementi da leggere
    float media; 
    //inserire la definizione delle altre variabili necessarie
    float Somma=0;
    int X;
    int Contatore=0;
    float Multipli_5=0;
    /*legge gli elementi, calcola la somma dei multipli di 5 e conta 
    quanti sono gli elementi letti che sono multipli di 5*/
    printf("Quanti valori numerici vuoi inserire? ");
    scanf("%d",&N);
    while(Contatore<N){
        printf("Inserisci un numero: ");
    	scanf("%d",&X);   	 	
    	if(X%5==0){
    	    Somma=Somma+X;
    	    Multipli_5=Multipli_5+1;	    
        }
        Contatore=Contatore+1;
	}
    /*calcola la media*/
    media=(Somma/Multipli_5);
    /*stampa la media*/
    printf("\nMEDIA= %.2f",media);
    return 0;
}

