#ifndef _MATHS_H_
#define _MATHS_H_
/*
  Mathematical function library
*/

/*
  Absolute value of the given number, i.e. the distance from the given
  number to zero.
  @param number the to get the absolute value of
  @return the absolute value of the given number
*/
double absolute(double number);

/*
  Raise the given number to the given exponent.
  @param number the number to raise to the given exponent
  @param exponent the power to raise the number to
  @return number raised to the power of exponent
*/
double power(double number, int exponent);

/*
  Check if the given number is prime
  @param number the number to check
  @return true if the number is prime, false otherwise
*/
bool is_prime(int number);

#endif
