/* pre-processor directive indicating that the program depends on the 
iostream library, which is part of the c++ standard library */
#include <iostream>

// define the main function as required by all c++ programs
int main()
{
    /* send "Hello world to the cout (character output) operator from
    the standard library (iostream) */
	std::cout << "Hello, world!";

    /* return a value of the same type as the defined return type for
    the parent function */
	return 0;
}
