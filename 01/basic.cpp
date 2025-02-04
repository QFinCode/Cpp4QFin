// basic.cpp
// introduction to data types (input/output)
//     built-in data type / abstract data type

#include <iostream>
#include <string>

int main() {
	int     w = 1;        // integer
	float  pi = 3.1415f;  // single precision floating number
	double  S = 5.00, V;  // double precision floating number
	bool flag = true;     // boolean -- true/false
	char  opt = 'C';      // character
	
	std::string str = "Hello world";  // character array
	
	// output with cout and insersion "<<" operator
	std::cout << "w = " << w << "\npi = " << pi
			  << "\nS = " << S << "\nV = " << V
			  << "\nflag = " << flag
			  << "\nopt = " << opt << " " << str << std::endl;
    
	// input with cin and extraction ">>" operator
	std::cin >> S >> V;
	std::cout << "S = " << S
	          << "\nV = " << V;
	                             
	return 0;
}