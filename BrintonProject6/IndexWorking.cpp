/******************************************************************************
* Bellevue Class: PROG 113
*           Term: Spring 2014
*     Instructor: Robert Main
*
* Solution/Project Name: PROG113_Project6
*             File Name: StringReverser.cpp
*
* This file defines the entry point method, main(), for a C++ Console
* application. When the executable file is selected for execution, the OS
* will transfer execution to the first line of code in method main(). Other
* methods called from main() may be defined here as well.
*
* Programmer: Colin Brinton
* Assigned Project: 6
*
* Revision     Date                        Release Comment
* --------  ----------  ------------------------------------------------------
*   1.0     05/14/2014  Initial Release
*
* File Methods
* ------------
*     Name                             Description
* ------------  --------------------------------------------------------------
* main          Program entry point method
* printReverse  Recursive method to display a C-Style string in reverse order
*
* Classes Utilized
* ----------------
* None
*
* Program Inputs
* --------------
*     Data Type                             Description
* ----------------  ----------------------------------------------------------
* Console Keyboard  User's phrase to display in reverse
*
* Program Outputs
* ---------------
*    Data Type                             Description
* ---------------  -----------------------------------------------------------
* Console Monitor  User's phrase displayed in reverse order
*
******************************************************************************
*/
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <iostream>  // Defines objects and classes used for stream I/O

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace
// "std" are utilized in this program

// Method Prototype Declaration
void printReverse(char* s);

/******************************************************************************
* Method: main()
*
* Method Description
* ------------------
*
*
*
* Method Arguments
* ----------------
*   Type        Name                        Description
* --------  -------------  ---------------------------------------------------
* None
*
* Return Value
* ------------
*   Type                              Description
* --------  ------------------------------------------------------------------
* void
*
* Invoked Methods
* ---------------
*      Name                            Description
* --------------  ------------------------------------------------------------
* printReverse()   Receives a pointer to a string. Scans forward until it reaches
*					a null character (\0). Prints each charecter staring from the
*					the end, moving backwards as it returns. 
******************************************************************************
*/
int main()
{
	// Constant "const" Value Declaration
	const int MAX_LENGTH = 80;

	// Uninitialized Array Declaration
	char str[MAX_LENGTH + 1];


	cout << "Enter a string: ";
	cin.getline(str, MAX_LENGTH);

	cout << "The reversed string is :\n";
	// Start the recursion at the first character in the array
	printReverse(str);


	// This prevents the Console Window from closing during debug mode
	// Note: Generally, you should not remove this code
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return 0;

}	// End method: main()


/******************************************************************************
* Method: printReverse(char*)
*
* Method Description
* ------------------
* Receives a pointer to a string via the first char address. Scans forward until it reaches
*	a null character (\0). Prints each charecter staring from the
*	the end, moving backwards as it returns. 
*
*
* Method Arguments
* ----------------
*   Type        Name                        Description
* --------  -------------  ---------------------------------------------------
* char*		phrase			A pointer to the first character in a user generated
*							string.
*
* Return Value
* ------------
*   Type                              Description
* --------  ------------------------------------------------------------------
* void
*
* Invoked Methods
* ---------------
*      Name                            Description
* --------------  ------------------------------------------------------------
* printReverse()	This is a recursive method. It calls itself if the current char
*					in the array is NOT '\0'. Advances one character each call by
*					adding 1 to phrase. As each call returns, it prints its char.
*
******************************************************************************
*/
void printReverse(char* phrase)
{
	// If the current char is not a null terminator, call printReverse, advancing
	// one character
	if (*phrase != '\0')
	{
		printReverse(phrase + 1);    // Recursive call. + 1 to advance one char
		cout << *phrase;	         // Print the current char as each call RETurns
	}

}	// End method: printReverse(char*)