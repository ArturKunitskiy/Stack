#pragma once
class Stack
{
private:

	int* data;
	int size;

public:
	Stack();
	void Push(int value);
	int Top();
	int Pop();
	int length();
	~Stack();
};