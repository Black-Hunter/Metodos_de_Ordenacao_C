#include <stdio.h>
#include <stlib.h>

// Função para ajustar um sub-heap máximo com raiz no índice 'raiz'
void ajustarHeap(int arr[], int n, int raiz) {
    int maior = raiz;
    int filho_esq = 2 * raiz + 1;
    int filho_dir = 2 * raiz + 2;

    // Se o filho esquerdo for maior que a raiz
    if (filho_esq < n && arr[filho_esq] > arr[maior]) {
        maior = filho_esq;
    }

    // Se o filho direito for maior que o maior até agora
    if (filho_dir < n && arr[filho_dir] > arr[maior]) {
        maior = filho_dir;
    }

    // Se o maior elemento não for a raiz
    if (maior != raiz) {
        // Troca a raiz com o maior elemento
        int temp = arr[raiz];
        arr[raiz] = arr[maior];
        arr[maior] = temp;

        // Recursivamente ajusta a sub-árvore afetada
        ajustarHeap(arr, n, maior);
    }
}

// Função principal para executar o Heap Sort
void heapSort(int arr[], int n) {
    // Constrói um heap máximo a partir dos elementos não classificados
    for (int i = n / 2 - 1; i >= 0; i--) {
        ajustarHeap(arr, n, i);
    }

    // Extrai elementos um por um do heap
    for (int i = n - 1; i > 0; i--) {
        // Move a raiz atual para o final do array
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Chama a função ajustarHeap na sub-árvore reduzida
        ajustarHeap(arr, i, 0);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    heapSort(arr, n);

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
