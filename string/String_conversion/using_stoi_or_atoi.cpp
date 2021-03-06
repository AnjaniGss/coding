//stoi() : The stoi() function takes a string as an argument and returns its value. Following is a simple implementation:

// C++ program to demonstrate working of stoi() 
// Work only if compiler supports C++11 or above. 
#include <iostream> 
#include <string> 
using namespace std; 

int main() 
{ 
	string str1 = "45"; 
	string str2 = "3.14159"; 
	string str3 = "31337 geek"; 

	int myint1 = stoi(str1); 
	int myint2 = stoi(str2); 
	int myint3 = stoi(str3); 

	cout << "stoi(\"" << str1 << "\") is "
		<< myint1 << '\n'; 
	cout << "stoi(\"" << str2 << "\") is "
		<< myint2 << '\n'; 
	cout << "stoi(\"" << str3 << "\") is "
		<< myint3 << '\n'; 

	return 0; 
} 




//atoi() : The atoi() function takes a character array or string literal as an argument and returns its value. Following is a simple implementation:

// For C++11 above 
#include <iostream> 
#include <cstdlib> 
using namespace std; 

int main() 
{ 
	const char *str1 = "42"; 
	const char *str2 = "3.14159"; 
	const char *str3 = "31337 geek"; 
	
	int num1 = atoi(str1); 
	int num2 = atoi(str2); 
	int num3 = atoi(str3); 
	
	cout << "atoi(\"" << str1 
			<< "\") is " << num1 << '\n'; 
	cout << "atoi(\"" << str2 
			<< "\") is " << num2 << '\n'; 
	cout << "atoi(\"" << str3 
			<< "\") is " << num3 << '\n'; 
	
return 0; 
} 
