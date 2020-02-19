#include <omp.h>                         // header necessario per openMP
#include <stdio.h>  
void  main()        
{
   #pragma omp parallel  num_threads(5)  // COSTRUTTO parallel di openMP: c'e' il FORK
   {                                     // NON METTERE la GRAFFA sulla linea di #pragma
      int id;                            // definisco intero per l'id
      id = omp_get_thread_num();         // funzione INTRINSECA di openMP
      printf("Ciao Mondo, sono il thread (%d)\n", id ); 
   }                                     // fine regione parallela JOIN
   printf(" Riciao Mondo\n" );           // Quante volte verra' scritto "Riciao"?      
}
