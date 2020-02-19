#include<omp.h>
#include<stdio.h>
int main()
{
  int i=0,j=0, imax=10, tanto=1000000;
  omp_set_num_threads(imax);
  #pragma omp parallel private (j)
   {
      for (j=0;j<tanto; j++)  // questo serve per aumentare i problemi...
      i = i +1;
   } 
   printf("teorica= %d,  somma con i thread= %d \n", imax*tanto, i);
}
