/*
-------------------------------------------------------------------------------------
Dato una sequenza di N coppie di valori interi. Calcolare la media dei valori
piu' grandi presenti in ciascuna coppia.
N viene fornito da l'utente. Verificare che il valore fornito sia un
intero maggiore di zero.
Esempio dato N = 4 e le coppie
10    7
2    20
23   40
3    5
Il programma fornisce come risultato
media = 18.74 (cio calcola la mendia nel seguente modo (10+20+40+5)/4)
-------------------------------------------------------------------------------------
*/

#define _CRT_SECURE_NO_WARNINGS //Stringa necessaria per Visual Studio
#include <stdio.h>

int main() {
    int N;
    int primo;
    int secondo;
    float media;
    int Contatore;
    int Massimo;
    int Somma;
    N = 0;
    //legge il valore N obbligando l'utente ad inserire un valore positivo
    while (N <= 0) {
        printf("Inserisci un valore che corrisponderà al numero di coppie: ");
        scanf("%d", &N);
    }
    //legge gli N valori e calcola la somma dei piÃ¹ grandi di ciascuna coppia
    Contatore = 0;
    Somma = 0;
    while (Contatore < N) {
        printf("Inserisci il Primo Numero: ");
        scanf("%d", &primo);
        printf("Inserisci il Secondo Numero: ");
        scanf("%d", &secondo);
        if(primo > secondo){
            Massimo = primo;
        }
        else {
            Massimo = secondo;
        }
        Somma = Somma + Massimo;
        Contatore = Contatore + 1;
    }

    //calcola e stampa la media
    media = Somma / N;
    printf("MEDIA = %f", media);
    return 0;
}