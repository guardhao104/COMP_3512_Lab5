#pragma once
#include "AbstractOperation.h"

class DivisionOperation : public AbstractOperation
{
public:
	static const char OPERATION_CODE = '/';
	DivisionOperation() : AbstractOperation(OPERATION_CODE) {};
	int perform(int a, int b) override { return a / b; };
	virtual inline ~DivisionOperation() {};
};