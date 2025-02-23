#include <iostream>
using namespace std;

int main()
{
	int a1[5];  // T arr[N]; -- array of N elements with type T
	a1[0] = 1, a1[1] = 2, a1[2] = 3, a1[3] = 4, a1[4] = 5;

	cout << "\na1 = ";  // print array with range-based for (C++11)
	for (int x : a1) cout << x << " ";
	
	int a2[5] = {1, 2, 3, 4, 5};  // same elements as a1
	int a3[ ] = {1, 2, 3, 4, 5};  // same elements as a1

	// print array with a general for statement
	cout << "\na2 = ";  // ++i  -->  i = i + 1
	for (int i = 0; i < 5; ++i) cout << a2[i] << " ";
	cout << "\na3 = ";  // i++  -->  i = i + 1
	for (int i = 0; i < 5; i++) cout << a3[i] << " ";

	int a4[5] = {1, 2, 3};  // same as a4[5] = {1, 2, 3, 0, 0}
	// int a5[5] = {1, 2, 3, 4, 5, 6}; // compile error!

	cout << "\na4 = ";  // i += 1 --> i = i + 1
	for (int i = 0; i < 5; i += 1) cout << a4[i] << " ";
	cout << "\na4 = ";  // every second element
	for (int i = 0; i < 5; i += 2) cout << a4[i] << " ";
	cout << endl;

	// auto increment and decrement operator (++/--)
	int i1, i2;
	i1 = 5, i2 = ++i1, cout << "i1 = " << i1 << " i2 = " << i2 << endl;  // 6 6
	i1 = 5, i2 = i1++, cout << "i1 = " << i1 << " i2 = " << i2 << endl;  // 6 5
	i1 = 5, i2 = --i1, cout << "i1 = " << i1 << " i2 = " << i2 << endl;  // 4 4
 	i1 = 5, i2 = i1--, cout << "i1 = " << i1 << " i2 = " << i2 << endl;  // 4 5

	return 0;
}