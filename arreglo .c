/*Nestor Federico Guadalupe Gonzalez
Practica 8
ejercicio promedio*/ 
#include <stdio.h>

int main()
{
  int arr[5],sum = 0, prom = 0;
//llenado de arreglo
  for(int i = 0; i < 5; i++ )
    {
      printf("dame una calificasion my nigga %i:", i+1 );
      scanf("%i", &arr[i]);
      
    }

  //calculo de la suma de calificasiones 
  for(int j= 0; j< 5; j++ )
    {
      sum = sum + arr[j];
    }
  //calculo promedio 
  prom = sum / 5;
    printf("su promedio my nigga es de %i \n", prom);
  return 0;
  
}
