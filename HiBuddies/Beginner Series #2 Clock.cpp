//Clock shows h hours, m minutes and s seconds after midnight.
//
//Your task is to write a function which returns the time since midnight in milliseconds.
//
//Example:
//h = 0
//m = 1
//s = 1
//
//result = 61000
//Input constraints :
//
//0 <= h <= 23
//0 <= m <= 59
//0 <= s <= 59

//1second == 1000ms
//1minute == 60s == 60000ms
//1h == 60m === 3600s == 3600000ms

#include <iostream>
#include <string>
#include <sstream>

int past(int h, int m, int s) {
	
	int result = 0;

	if (h == 0 && m == 0 && s == 0) return 0;

	if (h != 0) {
		int x = 0; 
		while (x < h) {
			result += 3600000;
			x++;
		}
	}

	if (m != 0) {
		int y = 0;
		while (y < m) {
			result += 60000;
			y++;
		}
	}

	if (s != 0) {
		int z = 0;
		while (z < s) {
			result += 1000;
			z++;
		}
	}

	
	return result;
}


int main() {
	int test_cases[3][3] = { {0, 1, 1}, {1, 1, 1}, {0, 0, 0} };

	std::cout << "Входные значения и их соответствующие выходные значения:\n";
	for (int i = 0; i < 3; i++) {
		int h = test_cases[i][0];
		int m = test_cases[i][1];
		int s = test_cases[i][2];
		std::cout << "past(" << h << ", " << m << ", " << s << ") = " << past(h, m, s) << std::endl;
	}

	return 0;
}