#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "../src/punto.h"

int main() {
    Punto a = crear_punto(0, 0);
    Punto b = crear_punto(3, 4);

    assert(fabs(distancia(a, b) - 5.0f) < 0.0001f);

    Punto c = crear_punto(1, 1);
    assert(fabs(distancia(c, c) - 0.0f) < 0.0001f);

    printf("PASS: todos los casos de Punto son correctos\n");
    return 0;
}
