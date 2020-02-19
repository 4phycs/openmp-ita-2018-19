#include <stdio.h>
#include <omp.h>
int fat(int n)
{
  int i, j;
  if (n<1) return 1;
  if (n<2)
    return n;
  else
    {
// ========================  omp ============
       i=fat(n-1);
// ========================  omp ============ 
       return i*n;
    }
}
int main()
{
  int n = 14;
  omp_set_num_threads(100);
// ======================== omp  ===========
  {
// ======================== omp  ===========
    printf ("fat(%d) = %d\n", n, fat(n));
  }
} 
