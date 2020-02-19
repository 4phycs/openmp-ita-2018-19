#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
void  main()
{
   int i,  N=20; 
   int *a;
   a = (int*) malloc(N*sizeof(int));        
   // inizio costrutto parallelo con 5 thread
   //    
   // inserire un comando openMP che per il ciclo
   for (i=0; i<N; i++)            
      { 
         a[i]=i;                      // ogni thread deve riempire un ingresso diverso   
      }
   //    fine costrutto parallelo
   for (i=0;i<N;i++)
   printf("%d\n", a[i]);              // controllo 
}
