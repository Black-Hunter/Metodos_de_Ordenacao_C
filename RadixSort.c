#include <stdio.h>
#include <stdlib.h>

// Função para encontrar o dígito máximo no array
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Função para realizar a ordenação por contagem com base no dígito especificado
void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    // Contagem do número de ocorrências de cada dígito
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Atualização do vetor de contagem para conter as posições finais dos elementos
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Construção do vetor de saída
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copia o vetor de saída para o vetor original
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Função principal que implementa o Radix Sort
void radixSort(int arr[], int n) {
    int max = findMax(arr, n);

    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    radixSort(arr, n);

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
