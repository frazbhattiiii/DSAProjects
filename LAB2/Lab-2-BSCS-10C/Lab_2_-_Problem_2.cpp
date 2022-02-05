/*
* Kindly fill this information.
* Name: Muhammad Ahmed Fraz
* Student #: 332779
* Date: 25/09/21
*/

#include <iostream>

using namespace std;

/*
* PROBLEM #2: Analyze pointers
*/

/*
* PART #1: Write a function that does two things:
* >> Write the memory location pointed by the pointer to the console.
* >> Write the value of the integer (which the pointer points to) to the console.
*/
void analyze_pointer(int *ptr)
{
	// Add your code here!
	cout << "The memory location pointed by the pointer to the console is: " << ptr << endl;
	cout <<"The value of the integer which the pointer poiints to the console is: "<< * (ptr);
	
}


/*
* PROBLEM #3: Add a couple more functions to the mix
* >> call them int_pointer1 and int_pointer2
* >> both will return int pointers.
*/

/*
* Follow the steps:
* >> the function will allocate an int on the heap (via new int)
* >> assign a value to it
* >> and return that value (an int pointer type).
*/
int* int_pointer1()
{
	// Add your code here!
	int* value = new int(5);
	return value;

}

/*
* Follow the steps:
* >> the function will allocate an int on the stack (via "int iValue;" or something similar)
* >> assign a value to it
* >> and return its memory location (an int pointer type).
*/
int* int_pointer2()
{
	// Add your code here!
	int value1 = 5;
	return &value1;
	
}


int main()
{
	/*
	* PART #2: Use the analyze_pointer function to complete two TASKS
	*/
	
	/*
	* TASK #1
	* >> allocate an int on the stack (e.g.,  "int iValue;")
	* >> assign a value to it
	* >> get its memory location (with the reference operator---&) 
	* >> and pass this value to analyze_pointer.
	*/
	cout << "Part #2: Memory on stack..." << endl;
	
	// Add your code here!

	
	/*
	* TASK #2
	* >> allocate an int on the heap (with the new operator)
	* >> assign a value to it
	* >> and pass it to analyze_pointer.
	*/
	cout << "Memory on heap..." << endl;
	
	// Add your code here!


	/*
	* PROBLEM #3: Call analyze_pointer on the return of functions int_pointer1() and int_pointer2()
	*/
	cout << "Memory on heap versus on stack..." << endl;
	
	// Add your code here!
	
	
	/*
	* Remember that int was allocated on the heap for function "int_pointer1()"
	* Delete it
	* and call analyze_pointer on it after deleting it.
	*/
	cout << "Memory on heap after delete..." << endl;
	
	// Add your code here!
	
	
	/*
	* Call: analyze_pointer(new int);
	*/
	
	// Add your code here!
	
	
	return 0;
}

/*
* State your response to the three questions below.
* 1>>
* 2>>
* 3>>
*/