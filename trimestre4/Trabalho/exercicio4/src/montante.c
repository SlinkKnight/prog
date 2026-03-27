#include <math.h>

float montante(float capital, float taxa, float tempo) {
    return capital * pow(1 + (taxa / 100), tempo);
}
