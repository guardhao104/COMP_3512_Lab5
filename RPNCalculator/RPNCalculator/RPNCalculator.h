#pragma once
#include <iostream>
#include <stack>
#include <sstream>
#include "AdditionOperation.h"
#include "SubtractionOperation.h"
#include "MultiplicationOperation.h"
#include "DivisionOperation.h"

class RPNCalculator
{
private:
	int result;
	std::stack<int> rpnstack;
	Operation *operation_type(char);
	void perform(Operation*);
public:
	int process_form(std::string formula);
};

Operation* RPNCalculator::operation_type(char operation)
{
	switch (operation)
	{
	case AdditionOperation::OPERATION_CODE:
		return new AdditionOperation();
	case SubtractionOperation::OPERATION_CODE:
		return new SubtractionOperation();
	case MultiplicationOperation::OPERATION_CODE:
		return new MultiplicationOperation();
	case DivisionOperation::OPERATION_CODE:
		return new DivisionOperation();
	default:
		std::cout << "Wrong operation!" << std::endl;
		return 0;
	}
}

void RPNCalculator::perform(Operation *ope)
{
	int a = rpnstack.top();
	rpnstack.pop();
	int b = rpnstack.top();
	rpnstack.pop();
	result = ope->perform(a, b);
	rpnstack.push(result);
}

int RPNCalculator::process_form(std::string formula)
{
	std::istringstream iss(formula);
	std::istringstream iss2;
	char c;
	int num;
	std::string numbertext;
	while (iss.get(c))
	{
		if (!isdigit(c) && !isblank(c))
		{
			while (iss2 >> num)
			{
				rpnstack.push(num);
			}
			numbertext = "";
			iss2.clear();
			perform(operation_type(c));
		}
		else {
			numbertext += c;
			iss2.str(numbertext);
		}
	}
	return result;
}