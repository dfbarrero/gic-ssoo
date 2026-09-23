#ifndef PUNTO_H
#define PUNTO_H

typedef struct {
    float x;
    float y;
} Punto;

Punto crear_punto(float x, float y);
float distancia(Punto a, Punto b);

#endif
