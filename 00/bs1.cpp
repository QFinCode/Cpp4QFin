// bs1.cpp
// Black-Scholes Formula for European Options

#include <cmath>
#include <iostream>

double normalCDF(double x)
{
    return std::erfc(-x / std::sqrt(2)) / 2;
}

int main() {
	double S, K, r, v, T;
	std::cout << "Please input the values for the following parameters:\n"
			  << "    1. Current asset price (e.g., 42.0).\n"
			  << "    2. Strike price (e.g., 40.0).\n"
			  << "    3. Risk free rate (e.g., 0.1).\n"
			  << "    4. Volatility of the underlying asset (e.g., 0.2).\n"
			  << "    5. The expiry (e.g., 0.5)." << std::endl;
	std::cin >> S >> K >> r >> v >> T;
			
	double d1 = (std::log(S / K) + (r + 0.5 * v * v) * T) / (v * std::sqrt(T));
	double d2 = d1 - v * std::sqrt(T); 
	double N_d1 = normalCDF(d1), N_d2 = normalCDF(d2);
	
	// c = SN(d1) - Ke^(-rT)N(d2)
	double call = S * N_d1 - K * std::exp(-r * T) * N_d2;
	// p = Ke^(-rT)N(-d2) - SN(-d1)  where N(-x) = 1 - N(x)
	double put = K * std::exp(-r * T) * (1 - N_d2) - S * (1 - N_d1); 

	std::cout << "Call value = " << call << std::endl;
	std::cout << "Put  value = " << put  << std::endl;
	
	return 0;
}