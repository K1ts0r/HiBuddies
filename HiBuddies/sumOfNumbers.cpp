//Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it.If the two numbers are equal return a or b.
//
//Note: a and b are not ordered!
//
//Examples(a, b) -- > output(explanation)
//(1, 0) -- > 1 (1 + 0 = 1)
//(1, 2) -- > 3 (1 + 2 = 3)
//(0, 1) -- > 1 (0 + 1 = 1)
//(1, 1) -- > 1 (1 since both are same)
//(-1, 0) -- > -1 (-1 + 0 = -1)
//(-1, 2) -- > 2 (-1 + 0 + 1 + 2 = 2)
//Your function should only return a number, not the explanation about how you get that number.

#include <iostream>
#include <vector>
int get_sum(int a, int b)
{
	int j = a;
	if (a == b) {
		return a;
	}

	int count = 0;
	while (a <= b) {
		count++;
		a++;
	}
	std::vector <int> vec;

	int result = 0;
	while (j <= count) { 
		if (j == b+1) break;
		vec.push_back(j);
		j = j+1;
	}
	
	for (std::vector<int>::size_type i = 0; i <= vec.size() - 1; i++) {
		result += vec[i];
	}
	return result;
}

int main() {
	int a = 1;
	int b = 0;
	get_sum(a, b);
	std::cout << get_sum(a, b);
}