#include <stdio.h>
#include <assert.h>
#include "../src/lista.h"

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    invertir_lista(arr1, 5);
    assert(arr1[0] == 5 && arr1[1] == 4 && arr1[2] == 3 && arr1[3] == 2 && arr1[4] == 1);

    int arr2[] = {1, 2};
    invertir_lista(arr2, 2);
    assert(arr2[0] == 2 && arr2[1] == 1);

    int arr3[] = {42};
    invertir_lista(arr3, 1);
    assert(arr3[0] == 42);

    printf("PASS: todos los casos de invertir_lista() son correctos\n");
    return 0;
}
