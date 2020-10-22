#include <stdio.h>
#include <stdlib.h>

#include "complex.h"

typedef struct modeloComplexo{
    float real;
    float img;
} complexo[2];

complexo criarComplexo(float a, float b, float c, float d) {
    complexo numcomp;

    numcomp[0].real = a;
    numcomp[0].img = b;

    numcomp[1].real = c;
    numcomp[1].img = d;

    return numcomp;
}

void liberarComplexo(float a, float b) {

}

float somaComplexo(float a, float b) {

}

float subtrairComplexo(float a, float b) {

}

float multiplicarComplexo (float a, float b) {

}

float dividirComplexo (float a, float b) {

}