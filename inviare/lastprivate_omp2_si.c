#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
   int a=5, j;
   omp_set_num_threads(4);            // uso 4 thread nella regione parallela 
   #pragma omp parallel for lastprivate(a)  // regione for parallela
   for (j=0; j<7;j++)                 //      
     {
        if (omp_get_thread_num()== 0)sleep(2); // rallento il thread  0
   a = j + 2;
   printf("Il thread =%d lavora con j=%d,  il valore di a=%d\n",  omp_get_thread_num(),j, a);
     }
   printf("Dopo il costrutto parallello il valore di  a=%d\n", a);
}
