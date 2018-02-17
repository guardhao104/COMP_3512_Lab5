#pragma once
#include <iostream>
#include <stack>
#include "AdditionOperation.h"
#include "SubtractionOperation.h"
#include "MultiplicationOperation.h"
#include "DivisionOperation.h"

class RPNCalculator : public AdditionOperation, public SubtractionOperation,
		public MultiplicationOperation, public DivisionOperation
{
private:
	int result;
	std::stack<int> rpnstack;
	Operation *operation_type(char);
	void perform(Operation*);
};

Operation* RPNCalculator::operation_type(char operation)
{
	switch (operation)
	{
	case AdditionOperation::OPERATION_CODE:
		return new AdditionOperation(operation);
	case SubtractionOperation::OPERATION_CODE:
		return new SubtractionOperation(operation);
	case MultiplicationOperation::OPERATION_CODE:
		return new MultiplicationOperation(operation);
	case DivisionOperation::OPERATION_CODE:
		return new DivisionOperation(operation);
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
	ope->perform(a, b);
}
