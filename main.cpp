/**
*	@Evan Brown
*	@11/5/18
*	@file main.cpp
*	@brief driver for LinkedList demo
*/

#include "TestSuite.h"

int main(int argc, char** argv)
{

	TestSuite tester;

	tester.allTests();

	return (0);

}

void operator delete(void* n){
	std::cout << typeid(n).name();
	free(n);
}
