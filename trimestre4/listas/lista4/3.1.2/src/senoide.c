#include <math.h>

float senoide(float f, int n) {
   return 100 * cos(2*3.141593*60*(n/2000.0)) + 100 * cos(2*3.141593*f*(n/2000.0));
}