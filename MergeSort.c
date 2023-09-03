#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 16

void mostra_vetor(int v[]) {
  int i, j;
  
  printf("\n");
  for (i = 0; i < TAMANHO; i++) {
    printf ("%2d, ", v[i]);
  }

  printf ("\n");
  
}

/* Intercala as seq��ncias v[p]..v[q-1] e v[q]..v[r] */
void intercala (int p, int q, int r, int v[]) {
  int i, j, k;
  int w[TAMANHO];

  i = p; 
  j = q;
  k = 0;

  while (i < q && j <= r) {
    if (v[i] <= v[j])  
      w[k++] = v[i++];
    else  
      w[k++] = v[j++];
  }
  
  while (i < q)  
    w[k++] = v[i++];

  while (j <= r)  
    w[k++] = v[j++];

  for (i = p; i <= r; i++)  
    v[i] = w[i-p];
}

void mergesort (int p, int r, int v[]) {
  if (p < r) {
    int q = (p + r)/2;
    mergesort (p, q, v);
    mergesort (q+1, r, v);
    intercala (p, q+1, r, v);
    mostra_vetor(v);
  }
}

int main () {
  
  int vetor[TAMANHO] = {13,7,2,5,9,11,4,15,0,10,1,12,6,14,3,8};


  mostra_vetor(vetor);
  mergesort (0, TAMANHO - 1, vetor);
  mostra_vetor(vetor);  
  
  return 0;
}
