#pragma once
#include "AbstractOperation.h"

class AdditionOperation : public AbstractOperation
{
public:
	static const char OPERATION_CODE = '+';
	AdditionOperation(char operation = OPERATION_CODE) : AbstractOperation(operation) {};
	int perform(int a, int b) override { return a + b; };
	virtual inline ~AdditionOperation() {};
};