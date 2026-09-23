#include <stdio.h>
#include <assert.h>
#include "../src/suma.h"

int main() {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(0, 0) == 0);

    printf("PASS: todos los casos de suma() son correctos\n");
    return 0;
}
