#include<omp.h>  // una somma inutilmente difficile dei numeri da 1 a N 
#include<stdio.h> 
static long N = 1000;                    // numero di punti da sommare
void main ()
{
int i,  sum=0;
int numThreads = N / 10;                 // numero di thread usato
//************ diciamo qui ad openMP che vogliamo numThreads
int arr_sum[numThreads];                 // array con somme parziali
//************ facciamo partire il blocco parallelo
       {
        int par , arr;                   // partenza e arrivo
//************ chiediamo a openMP l'id del chiamante, chiamiamolo "me" 
//************ calcoliamo quanti punti sono calcolati da ogni thread
        int local_sum=0                  // azzeriamo la somma locale da calcolare
//************ calcoliamo il punto di partenza della somma (funzione dell'id)
//************ calcoliamo il punto di arrivo della somma (funzione dell'id)
        for (i= par; i< arr; i++){
                local_sum = local_sum + i;  // somma dei valori da "par" a "arr" 
                                 }
//************ mettiamo la somma locale in un array globale 
}
  for (i=0;i<numThreads; i++) {sum += arr_sum[i];}
  printf("Somma= %d, teorica %d\n", sum, N*(N+1)/2);
} 

