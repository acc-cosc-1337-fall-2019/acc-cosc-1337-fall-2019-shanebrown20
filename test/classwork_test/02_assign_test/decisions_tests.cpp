#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test gross pay function")
{
	REQUIRE(gross_pay(10,10) == 100);
	REQUIRE(gross_pay(40,10) == 400);
	REQUIRE(gross_pay(50,10) == 550);

}