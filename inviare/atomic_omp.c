#include <stdio.h>  
#include <omp.h>    
int main() {  
   int conto = 0;  
   #pragma omp parallel num_threads(10)
   {  
      #pragma omp atomic  
      conto++;             
   }  
   printf("Numero di thread: %d\n", conto);  
}  
