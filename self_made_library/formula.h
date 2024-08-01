#include <math.h>

double square(double z) {
    return z * z;
}

double squareRoot(double z) {
    return sqrt(z);
}

 double factorial(double y) {
    if (y == 0 || y == 1) {
        return 1;
    }
    return y * factorial(y - 1);
}

double cubeRoot(double z) {
    return cbrt(z);
}

double percentage(double v, double t) {
    return (v/t)*100.00;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}
