#include <math.h>
#include "complex.h"
double Complex::modulo() {
	return sqrt(i*i + j * j);
}

void Complex::set(double i_out, double j_out) {
	i = i_out;
	j = j_out;
}