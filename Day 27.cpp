//=======================================================================================================
//                                                                                                      =
//............................C_String manupulation.....................................................=
//                                                                                                      =
//=======================================================================================================
#include <iostream>
#include <string.h>
#include <cstring> // Needed for `strlen()`


using namespace std;
//
//A C string is a sequence of characters terminated by a null
//character('\0').C strings are stored as arrays of characters, and they are used to represent text data in C programs.


int str() {
/*
	const char c_string[] = "Hello, World!";
	cout <<  strrep(c_string, 'l', 'L') << endl;  // Output: HeLLo, WorLd!
	return 0;
	*/
}

//=========================================...........strlen.........============================================
int str1() {

	const char* str = "Hello";
	int strLength = strlen(str);
	std::cout << "Length of string: " << strLength << std::endl;
	return 0;
}

//=========================================...........sizeof.........============================================
int str2() {
	int num = 10;
	size_t numSize = sizeof(num);
	std::cout << "Size of integer variable: " << numSize << std::endl;
	return 0;
}

//=========================================....................============================================
//                                          Comparing Strings
//=========================================....................============================================
int com() {

	const char* str1 = "Hello";
	const char* str2 = "World";

	int comparisonResult = strcmp(str1, str2);

	if (comparisonResult == 0) {
		std::cout << "Strings are equal." << std::endl;
	}
	else if (comparisonResult < 0) {
		std::cout << "String '" << str1 << "' is less than '" << str2 << "'." << std::endl;
	}
	else {
		std::cout << "String '" << str1 << "' is greater than '" << str2 << "'." << std::endl;
	}

	return 0;
}

//===============================================
//          example 2
//===============================================
int com1() {


	const char* str1 = "Hello";
	const char* str2 = "World";

	if (strcmp(str1, str2) == 0) {
		std::cout << "Strings are equal." << std::endl;
	}
	else {
		std::cout << "Strings are not equal." << std::endl;
	}

	return 0;
}
//=========================================....................============================================
//                                          find first occourance
//=========================================....................============================================
int com2() {

	/*
	const char* str = "Hello, World!";
	char targetChar = 'o';

	char* foundChar = strchr(str, targetChar);

	if (foundChar) {
		std::cout << "The character '" << targetChar << "' is found at position " << (foundChar - str) << "." << std::endl;
	}
	else {
		std::cout << "The character '" << targetChar << "' is not found in the string." << std::endl;
	}

	return 0;
	*/
}

int com3() {

	
		std::string str = "Hello, World!";
		char targetChar = 'o';

		size_t foundIndex = str.find(targetChar);

		if (foundIndex != std::string::npos) {
			std::cout << "The character '" << targetChar << "' is found at position " << foundIndex << "." << std::endl;
		}
		else {
			std::cout << "The character '" << targetChar << "' is not found in the string." << std::endl;
		}

		return 0;


}
//================================================================
//        Example from video
//================================================================

int com4() {

	// Find the first occurrence of a character
	std::cout << std::endl;
	std::cout << "std::strchr : " << std::endl;
	// doc :https://en.cppreference.com/w/cpp/string/byte/strchr
	//we use std::strchr to find all the characters ope by one.
	const char* str{ "Try not. Do, or do not. There is no try." };
	char target = 'T';
	const char* result = str;
	int iterations{};
	while ((result = std::strchr(result, target)) != nullptr) {
	std::cout << "Found '" << target<<"'starting at' "<< result << "\n";
	// Increment result, otherwise we ll find tasget at the same location
	+result;
	+iterations;
}
		std::cout<< "iterations: "<< iterations << std::endl;

}
int main()
{
	    str();
		str1();
		str2();
		com();
		com1();
		com2();
		com3();
		com4();

}
