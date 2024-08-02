//You are going to be given a word.Your job is to return the middle character of the word.If the word's length is odd, return the middle character. If the word's length is even, return the middle 2 characters.
//
//#Examples:
//
//Kata.getMiddle("test") should return "es"
//
//Kata.getMiddle("testing") should return "t"
//
//Kata.getMiddle("middle") should return "dd"
//
//Kata.getMiddle("A") should return "A"

#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

std::string get_middle(std::string input)
{
	int lenght = input.size();
	
	if (lenght <= 2) return input;
	if (lenght % 2 == 0) {
		int num1 = lenght / 2;
		int num2 = num1 + 1;

		char res1 = input[num1 - 1];
		char res2 = input[num2 - 1];
		return std::string(1,res1) + std::string(1, res2);
	}
	else {
		float num1 = lenght / 2;
		int num2 = std::floor(num1);

		char res1 = input[num2];
		return std::string(1, res1);
	}
}

int main() {
	std::string array[4] = { "test","testing", "middle", "A" };
	for (int i = 0; i <= 3; i++) {
		std::cout << "Result for " << i << " element " << get_middle(array[i]) << std::endl;
	}

}