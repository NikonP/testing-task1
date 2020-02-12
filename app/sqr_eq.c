#include <math.h>
#include "sqr_eq.h"

solution solve_eq(double a, double b, double c) {
    solution res;

    double D = pow(b, 2) - 4*a*c;

    if(D < 0) {
        res.sol_count = NO_SOL;
    } else if(D == 0) {
        res.sol_count = ONE_SOL;
        res.x1 = (-1*b) / 2*a;
    } else if(D > 0) {
        res.sol_count = TWO_SOL;
        res.x1 = ((-1*b) - sqrt(D))/ 2*a;
        res.x2 = ((-1*b) + sqrt(D))/ 2*a;
    }

    return res;
}
