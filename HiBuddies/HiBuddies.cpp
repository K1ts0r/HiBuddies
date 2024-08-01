#include <string>
#include <iostream>
#include <cctype>
#include <sstream>

std::string alphabet_position(const std::string& text) {
    std::ostringstream str;
    for (char c : text) {
        if (std::isalpha(c)) {
            int position = std::tolower(c) - 'a' + 1;
            str << position << " ";
        }
    }

    std::string result = str.str();
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string input = "The sunset sets at twelve o' clock.";

    std::string output = alphabet_position(input);

    std::cout << "Input: " << input << std::endl;
    std::cout << "Output: " << output << std::endl;

    return 0;
}