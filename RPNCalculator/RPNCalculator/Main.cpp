#include <iostream>
#include <string>
#include "RPNCalculator.h"

int main()
{
	std::cout << "Enter your formula:\n";
	std::string formula;
	std::getline(std::cin, formula);
	std::cout << "You entered " << formula << std::endl;
	RPNCalculator calculator;
	int result = calculator.process_form(formula);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;
	system("pause");

	return 0;
}