#include<iostream>
#include<list>
#include<algorithm>
	

int main(){
	std::list<int> numbers{ 5,125,374,37,120,154,201,200,147 };
	std::for_each(numbers.begin(), numbers.end(), [](int num) {
		if (num > 100 && num < 200) {
			std::cout << num << std::endl;
		}
		});

	return 0;
}