#ifndef ELEMENTARY_MATHS_MATHUTILS_PRIME_NUMBER_THEOREMS_
#define	ELEMENTARY_MATHS_MATHUTILS_PRIME_NUMBER_THEOREMS_

#include <stddef.h>

/**
 * isprime
 * @argument unsigned int number that determines if the number is prime
 * @return   1 if the number is prime.
 */
bool isprime(unsigned int whole_number, unsigned int &divisor);

void copyPrimeDivisors(long int whole_number, unsigned int **prime_divisors, size_t &length);

bool isOdd(unsigned int number);

#endif
