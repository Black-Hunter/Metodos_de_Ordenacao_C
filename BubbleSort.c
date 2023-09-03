#include <stdio.h>
#include <stlib.h>

void bubbleSort(int arr[], int n) {
    int temp;
    int swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = 0; // Variável para otimização, se não houver trocas, o array está ordenado.

        for (int j = 0; j < n - i - 1; j++) {
            // Compara elementos adjacentes
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        // Se não houve trocas nesta passagem, o array está ordenado.
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array desordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
