#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  TAM 10

int Pivo(int esq, int dir){
    return (dir + esq) / 2;
}

void exibir(int *vet, int opc, int pivo){
    
    if(opc == 1){
       printf("\n\nEm Ordem :\n"); 
    }else{
        printf("\n\nPassos\n");
        printf("\n Pivo: %d \n", pivo);
    }
    
    
    for(int i = 0; i < TAM; i++){
        printf("%d |", vet[i]);
    }
}


 
 
void quick_sort(int *vet, int esq, int dir) {
    int i, j, x, y;
     
    i = esq;
    j = dir;
    x = vet[Pivo(esq, dir)];
    
    exibir(vet, 2, x);
     
    while(i <= j) {
        while(vet[i] < x && i < dir) {
            i++;
        }
        while(vet[j] > x && j > esq) {
            j--;
        }
        if(i <= j) {
            y = vet[i];
            vet[i] = vet[j];
            vet[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esq) {
        quick_sort(vet, esq, j);
    }
    if(i < dir) {
        quick_sort(vet, i, dir);
    }
   
}
 

int main(){
    
    int vet[TAM];
    srand(time(NULL));
    for(int i = 0 ;i < TAM; i++){
        vet[i] = rand() % 100;
    }
    
    quick_sort(vet, 0, TAM - 1);
 
    exibir(vet, 1, 0);
    return 0;
}
 
