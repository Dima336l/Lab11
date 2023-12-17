#include "maths.h"

double absolute(double number)
{
  if (number <= -1)
    number = -number;
  return number;
}

double power(double number, int exponent)
{
  
  double result = number;
  for (int i = 0; i < absolute(exponent) - 1; ++i) {
       result *= number;
  }
  if (exponent < 0) {
      result = 1.0 / result;
  }
  return result;
}

bool is_prime(int number)
{
  if (number <= 1) {
    return false;
  }
  else { 
    for (int i = 2; i < number; ++i) {
    if (number % i == 0)
      return false;
    }
  }
  return true;
}

