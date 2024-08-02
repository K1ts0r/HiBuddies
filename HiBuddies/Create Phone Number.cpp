//Write a function that accepts an array of 10 integers(between 0 and 9), that returns a string of those numbers in the form of a phone number.
//
//Example
//createPhoneNumber(int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"
//The returned format must be correct in order to complete this challenge.
//
//Don't forget the space after the closing parentheses!

#include <string>
#include <iostream>
#include <sstream>

std::string createPhoneNumber(const int arr[10]) {
	std::stringstream str;
	str << "(";

	for (int i = 0; i <= 2; i++) {
		str << arr[i];
	}

	str << ") ";

	for (int i = 3; i <= 5; i++) {
		str << arr[i];
	}

	str << "-";
	
	for (int i = 6; i <= 9; i++) {
		str << arr[i];
	}
	return str.str();
}

int main() {
	int arr[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	createPhoneNumber(arr); // => returns "(123) 456-7890"


}