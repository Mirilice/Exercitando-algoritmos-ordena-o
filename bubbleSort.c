#include <stdio.h>
void
bubleSort (int tam, int vetor[])
{
  int aux, flag = 1;
  while (flag)
    {
      flag = 0;
      for (int i = 1; i < tam; i++)
	{
	  if (vetor[i-1] > vetor[i])
	    {
	      flag = 1;
	       aux =vetor[i];
	      vetor[i] = vetor[i-1];
	      vetor[i-1] = aux;
	    }
	}
	if(!flag){
        break;
    }
    }
    
  for (int i = 0; i < tam; i++)
    {
      printf ("%i\t", vetor[i]);
    }
}

void
main ()
{
  int tamanho;
  printf ("Informe o tamanho do vetor:");
  scanf ("%i", &tamanho);
  int v[tamanho];
  for (int i = 0; i < tamanho; i++)
    {
      printf ("\nNumero %d:" ,(i + 1));
      scanf ("%i", &v[i]);
    }
  printf ("Vetor antes da ordenacao:");
  for (int i = 0; i < tamanho; i++)
    {
      printf ("%i\t", v[i]);
    }
  printf ("\nApos ordenacao:");
  bubleSort (tamanho, v);

}
