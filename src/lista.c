#include "lista.h"

void invertir_lista(int arr[], int n) {
    int inicio = 0;
    int fin = n - 1;

    while (inicio < fin) {
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
        inicio++;
        fin--;
    }
}
