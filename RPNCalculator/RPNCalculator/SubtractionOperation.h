#pragma once
#include "AbstractOperation.h"

class SubtractionOperation : public AbstractOperation
{
public:
	static const char OPERATION_CODE = '-';
	SubtractionOperation(char operation = OPERATION_CODE) : AbstractOperation(operation) {};
	int perform(int a, int b) override { return a - b; };
	virtual inline ~SubtractionOperation() {};
};