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

//////////// alternative variant /////////////////
//
//#include <iostream>
//#include <algorithm> // Для std::min и std::max
//
//int get_sum(int a, int b) {
//	if (a == b) {
//		return a; // Если a и b равны, просто вернем их значение
//	}
//
//	// Определяем минимальное и максимальное значение из a и b
//	int min_val = std::min(a, b);
//	int max_val = std::max(a, b);
//
//	int sum = 0;
//
//	// Суммируем все числа от min_val до max_val включительно
//	for (int i = min_val; i <= max_val; ++i) {
//		sum += i;
//	}
//
//	return sum;
//}
//
//int main() {
//	std::cout << get_sum(1, 0) << std::endl; // Вывод: 1 (1 + 0 = 1)
//	std::cout << get_sum(1, 2) << std::endl; // Вывод: 3 (1 + 2 = 3)
//	std::cout << get_sum(0, 1) << std::endl; // Вывод: 1 (0 + 1 = 1)
//	std::cout << get_sum(1, 1) << std::endl; // Вывод: 1 (1, так как a и b одинаковы)
//	std::cout << get_sum(-1, 0) << std::endl; // Вывод: -1 (-1 + 0 = -1)
//	std::cout << get_sum(-1, 2) << std::endl; // Вывод: 2 (-1 + 0 + 1 + 2 = 2)
//
//	return 0;
//}
