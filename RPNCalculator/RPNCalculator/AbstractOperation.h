#pragma once
#include "Operation.h"

class AbstractOperation : public Operation
{
private:
	char operation_type;
public:
	AbstractOperation(char operation) : operation_type(operation) {};
	char get_code() override { return operation_type; };
	virtual inline ~AbstractOperation() {};
};