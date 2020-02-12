#include <math.h>
#include "sqr_eq.h"

double * solve_eq(double a, double b, double c) {
    static double res[3] = {0, 0, NO_SOL};

    double D = pow(b, 2) - 4*a*c;

    if(D < 0) {
        res[2] = NO_SOL;
    } else if(D == 0) {
        res[2] = ONE_SOL;
        res[0] = (-1*b) / 2*a;
    } else if(D > 0) {
        res[2] = TWO_SOL;
        res[0] = ((-1*b) - sqrt(D))/ 2*a;
        res[1] = ((-1*b) + sqrt(D))/ 2*a;
    }

    return res;
}
