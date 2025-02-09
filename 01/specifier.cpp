// specifier.cpp
// more built-in data types
//    using specifiers (long/short/signed/unsigned)

#include <iostream>

int main() {
	  signed char cs;  // [-(2^7-1), (2^7-1)] = [-127, 127]
	unsigned char cu;  // [0, 2^8-1] = [0, 255]
	          int i ;  // same as: signed int (signed is the default) 
	 unsigned int iu;
	    short     is;  // same as:  short int
	     long     il;  // same as:   long int
	        float f ;  //   single-precision
	       double d ;  //   double-precision
	  long double dl;  // extended-precision
		
	std::cout
		<< "\n   signed char = " << 8 * sizeof(cs) << " bits"
		<< "\n unsigned char = " << 8 * sizeof(cu) << " bits"
		<< "\n    signed int = " << 8 * sizeof(i)  << " bits"
		<< "\n  unsigned int = " << 8 * sizeof(iu) << " bits"
		<< "\n     short int = " << 8 * sizeof(is) << " bits"
		<< "\n      long int = " << 8 * sizeof(il) << " bits"
		<< "\n         float = " << 8 * sizeof(f)  << " bits"
		<< "\n        double = " << 8 * sizeof(d)  << " bits"
		<< "\n   long double = " << 8 * sizeof(dl) << " bits"
		<< std::endl;
	
	return 0;
}