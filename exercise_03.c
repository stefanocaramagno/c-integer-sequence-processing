/*
--------------------------------------------------------------------
Scrivere un programma che stampi tutti gli elementi di posizione 
pari di una sequenza N di numeri interi inserita dall’utente  
--------------------------------------------------------------------
*/

#include <stdio.h>
int main(void)
{
	int N;
	int Contatore=1;
	while(N > 0){
		printf("Inserisci un numero in posizione %d: ",Contatore);
	    scanf("%d",&N);		
		if(Contatore%2==0){
			printf("%d\n",N);		
	    }
	   Contatore=Contatore+1;
    }		
}

