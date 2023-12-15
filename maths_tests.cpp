#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "maths.h"
#include "maths.cpp"

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
  REQUIRE(power(1,3) == 1);
  REQUIRE(power(2,2) == 4);
  REQUIRE(power(2,3) == 8);
  REQUIRE(power(3,2) == 9);
  REQUIRE(power(3,3) == 27);
  REQUIRE(power(3,-2) == -9);
  REQUIRE(power(3,-3) == -27);
}
