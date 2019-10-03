#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test get max from vector")
{
	vector<int> nums1 = { 3,8,1,99,1000 };
	vector<int> nums2 = { 15,12,11,99,88 };
	vector<int> nums3 = { 150,120,11,990,88888 };

	

	REQUIRE(get_max_from_vector(nums1) == 1000);
	REQUIRE(get_max_from_vector(nums2) == 99 );
	REQUIRE(get_max_from_vector(nums3) == 88888);
}

TEST_CASE("test is prime")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}

TEST_CASE("test vector of primes")
{
	vector<int> expected_vector1 = { 2,3,5,7 };
	vector<int> expected_vector2 = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
	REQUIRE(vector_of_primes(10) == expected_vector1);
	REQUIRE(vector_of_primes(50) == expected_vector2);
}