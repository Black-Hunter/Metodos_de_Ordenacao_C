#include <stdio.h>
#include <stlib.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        // Encontra o índice do menor elemento no array não classificado.
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Troca o elemento mínimo com o elemento atual.
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
