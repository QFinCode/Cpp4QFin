// boolean.cpp
//     relational & logical operators
//     if-else & ternary operator

#include <iostream>

int main()
{
	int i, j;
	std::cout << "Enter first integer i : ";
	std::cin >> i;
	std::cout << "Enter second integer j : ";
	std::cin >> j;

	// relational operators: ==, !=, <=, >=, <, >
	bool flag = (i == j);

	// if-else statement
	if (flag) {
		std::cout << i << " is equal to ";
		std::cout << j << std::endl;
	}
	
	if (i == j)     std::cout << i << " is equal to "   << j << std::endl;
	else if (i > j) std::cout << i << " is great than " << j << std::endl;
	else            std::cout << i << " is less than "  << j << std::endl;

	// ternary operator
	int max_val = i > j ? i : j;
	std::cout << "max value = " << max_val << std::endl; 

	// logical operator: !(not), &&(and), ||(or)
	std::cout << " (i == j) = " <<  flag << std::endl;
	std::cout << "!(i == j) = " << !flag << std::endl;
	std::cout << "true && true   = " << (true  && true)  << std::endl; // 1
	std::cout << "false && true  = " << (false && true)  << std::endl; // 0
	std::cout << "true || false  = " << (true  || false) << std::endl; // 1
	std::cout << "false || false = " << (false || false) << std::endl; // 0	
	
	return 0;
}