#pragma once
#include "AbstractOperation.h"

class MultiplicationOperation : public AbstractOperation
{
public:
	static const char OPERATION_CODE = '*';
	MultiplicationOperation(char operation = OPERATION_CODE) : AbstractOperation(operation) {};
	int perform(int a, int b) override { return a * b; };
	virtual inline ~MultiplicationOperation() {};
};