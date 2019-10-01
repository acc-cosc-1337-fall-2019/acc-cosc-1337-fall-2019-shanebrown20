#include "vec.h"
#include <string>
int main() 
{
	loop_vector_w_index();
	std::vector<int> result = ret_vec_int();
	std::vector<int> nums = { 99,55,1,3,66 };
	std::vector<std::string> strs(9, " "); // 9 empty spaces
	loop_vector_w_index(nums);

	loop_vector_w_index_ref(nums);

	loop_vector_w_index_const(nums);

	loop_vector_w_for_ranged_(nums);


	return 0;
}