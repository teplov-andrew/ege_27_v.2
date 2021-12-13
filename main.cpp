#include <stdio.h>



void min_sum_distance_ineff_2()
{
  // int n = 0;
  // scanf("%i", &n);
  int k = 0;
  int cnt = 0;
  long int num[9999];
  while (num[cnt-1] != -9999){
    scanf("%li", &num[cnt]);
    cnt++;
  }

  for(int i=0; i<cnt-1; i++) {
    printf("%li\n", num[i]);
  } 
}


int main()
{
    min_sum_distance_ineff_2();
    return 0;
}



