#pragma once
#include "AbstractOperation.h"

class MultiplicationOperation : public AbstractOperation
{
public:
	static const char OPERATION_CODE = '*';
	MultiplicationOperation() : AbstractOperation(OPERATION_CODE) {};
	int perform(int a, int b) override { return a * b; };
	virtual inline ~MultiplicationOperation() {};
};