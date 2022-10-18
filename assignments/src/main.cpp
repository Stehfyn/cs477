#include <iostream>
#include <vector>
#include <memory>

int64_t divide_and_conquer(std::vector<int64_t>&);
int64_t divide_and_conquer_impl(std::vector<int64_t>&, std::vector<int64_t>&);
void print_vec(std::vector<int64_t>&);

int main()
{
	std::vector<int64_t> v = {1,2,3,4,5,6,7};
	divide_and_conquer(v);
	return 0;
}

//divide and conquer algorithm that returns the position of the largest element
int64_t divide_and_conquer_impl(std::vector<int64_t>& arr1, std::vector<int64_t>& arr2)
{
	std::vector<int64_t> list1;
	std::vector<int64_t> list2;
	
}
int64_t divide_and_conquer(std::vector<int64_t>& arr)
{
	std::vector<int64_t> list1(arr.begin(), arr.begin() + ((const size_t)arr.size() / 2));
	std::vector<int64_t> list2(arr.begin() + ((const size_t)arr.size() / 2), arr.end());
	
	divide_and_conquer_impl(list1, list2);





	std::cout << "list1" << std::endl;
	print_vec(list1);
	std::cout << std::endl << "list2" << std::endl;
	print_vec(list2);
	std::cout << std::endl;
}
void print_vec(std::vector<int64_t>& v)
{
	for(int64_t x : v)
	{
		std::cout << x << ' ';
	}
}
