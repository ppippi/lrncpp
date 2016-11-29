// ch1.12_q1_add user inputs.cpp : Takes two user inputs and adds them together
//
#include "stdafx.h"
#include "ch1.12_q1_add user inputs_io.h"

//adds two user inputs and outputs to console
int main()
{
	int addAnswer = readNumber() + readNumber();
	writeAnswer(addAnswer);
	return 0;
}
