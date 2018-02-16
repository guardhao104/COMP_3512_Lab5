#pragma once
#include "AbstractOperation.h"

class DivisionOperation : public AbstractOperation
{
public:
	static const char OPERATION_CODE = '/';
	DivisionOperation(char operation = OPERATION_CODE) : AbstractOperation(operation) {};
	int perform(int a, int b) override { return a / b; };
	virtual inline ~DivisionOperation() {};
};