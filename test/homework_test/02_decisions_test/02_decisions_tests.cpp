#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_grade_points function")
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("X") == -1);
}
TEST_CASE("Test calculate_gpa function")
{
	REQUIRE(calculate_gpa(27,9) == 3.0);
	REQUIRE(calculate_gpa(42,12) == 3.5);
}