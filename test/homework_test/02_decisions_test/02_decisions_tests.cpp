#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/02_decisions/decisions.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_grade_points function")
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);
}
TEST_CASE("Test calculate_gpa function")
{
	REQUIRE(calculate_gpa(9, 27) == 3.0);
	REQUIRE(calculate_gpa(12, 42) == 3.5);
	REQUIRE(calculate_gpa(120, 390) == 3.25);
}