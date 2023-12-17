#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "maths.h"

TEST_CASE("test primes", "[is_prime]")
{
  REQUIRE(is_prime(2) == true);
  REQUIRE(is_prime(3) == true);
  REQUIRE(is_prime(4) == false);
  REQUIRE(is_prime(5) == true);
  REQUIRE(is_prime(6) == false);
  REQUIRE(is_prime(7) == true);
  REQUIRE(is_prime(8) == false);
  REQUIRE(is_prime(9) == false);
}

TEST_CASE("absolute", "[absolute]")
{
  REQUIRE(absolute(-1) == 1);
  REQUIRE(absolute(1) == 1);
  REQUIRE(absolute(-2) == 2);
  REQUIRE(absolute(2) == 2);
  REQUIRE(absolute(-3) == 3);
  REQUIRE(absolute(3) == 3);
}

TEST_CASE("power", "[power]")
{
  REQUIRE(power(1.0,3) == 1.0);
  REQUIRE(power(1,-3) == 1.0);
  REQUIRE(power(2.0,2) == 4.0);
  REQUIRE(power(2.0,3) == 8.0);
  REQUIRE(power(3.0,2) == 9.0);
  double result1 = power(3.0,-2);
  double expected1 = 1.0/9.0;
  double epsilon = 1e-6;
  REQUIRE(std::abs(result1-expected1) < epsilon);
  double result2 = power(4.0,-2);
  double expected2 = 1.0/16.0;
  REQUIRE(std::abs(result2-expected2) < epsilon);
  
}
