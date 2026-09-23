#include <math.h>
#include "punto.h"

Punto crear_punto(float x, float y) {
    Punto p;
    p.x = x;
    p.y = y;
    return p;
}

float distancia(Punto a, Punto b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrtf(dx * dx + dy * dy);
}
