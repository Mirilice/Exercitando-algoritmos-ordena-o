
#include <stdio.h>
void
criaHeap (int *vet, int i, int f)
{
  int aux = vet[i];
  int j = i * 2 + 1;
  while (j <= f)
    {
      if (j < f)
	{
	  if (vet[j] < vet[j + 1])
	    {
	      j += 1;
	    }
	}
      if (aux < vet[j])
	{
	  vet[i] = vet[j];
	  i = j;
	  j = 2 * i + 1;
	}
      else
	j = f + 1;
    }
  vet[i] = aux;
}

void
HeapSort (int *vet, int n)
{
  int aux, i;
  for (i = (n - 1) / 2; i >= 0; i--)
    {
      criaHeap (vet, i, n - 1);
    }
  for (i = (n - 1); i >= 1; i--)
    {
      aux = vet[0];
      vet[0] = vet[i];
      vet[i] = aux;
      criaHeap (vet, 0, i - 1);
    }
    for (i = 0; i < n; i++)
    {
      printf ("%i\t", vet[i]);
    }
}

void
main ()
{
  //pai (i), filhos (2*i+1) + (2*i+2)
  int tamanho;
  printf ("Informe o tamanho do vetor:");
  scanf ("%i", &tamanho);
  int v[tamanho];
  for (int i = 0; i < tamanho; i++)
    {
      printf ("\nNumero %d:", (i + 1));
      scanf ("%i", &v[i]);
    }
  printf ("Vetor antes da ordenacao:");
  for (int i = 0; i < tamanho; i++)
    {
      printf ("%i\t", v[i]);
    }
  printf ("\nApos ordenacao:");
  HeapSort(v, tamanho);
}
