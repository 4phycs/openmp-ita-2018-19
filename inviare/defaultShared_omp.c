#include <omp.h>                         // header necessario per openMP
#include <stdio.h>  
void  main()        
{  
   int j=3;
   int a=0;
   omp_set_num_threads(3);
   #pragma omp parallel private(a) default(private) // 
   {                                     // 
      int id,i;                            // 
      id = omp_get_thread_num();
      
      printf("Ciao Mondo, sono il thread (%d) e ho calcolato: %d\n", id, j); 
   }
                                     
}
