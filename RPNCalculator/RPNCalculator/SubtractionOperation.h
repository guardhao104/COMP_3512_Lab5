#pragma once
#include "AbstractOperation.h"

class SubtractionOperation : public AbstractOperation
{
public:
	static const char OPERATION_CODE = '-';
	SubtractionOperation() : AbstractOperation(OPERATION_CODE) {};
	int perform(int a, int b) override { return a - b; };
	virtual inline ~SubtractionOperation() {};
};