/*
* Kindly fill this information.
* Name: Muhammad Ahmed Fraz
* Student #: 332779
* Date: 12/09/13
*/

#include <iostream>
#include <string>

using namespace std;

/*
* Define a struct Area that has two private variable members;
* units of type string and area_value of type float.
*/
struct Area
{
private:
	


	// Add your code here!
	string unit;
	float  AreaValue;
public:
	// Setter
	void setAreaValue(float area_value) {
		AreaValue = area_value;
	}
	// Getter
	float getAreaValue() {
		return AreaValue;
	}

	void setUnit(string units) {
		unit = units;

	}
	string getUnit() {
		return unit;

	}
};

int main()
{
	/*
	* Modify program to create a dynamic variable of type Area.
	*/
	
	// Add your code here!

	Area area = new Area();


	/*
	* Input from the keyboard the area_value and its units.
	*/
	cout << "Enter the value of the area: " << endl;
	cin<<
	
	// Add your code here!
	
	
	/*
	* Compute one-half and one-quarter of the area 
	* and display the results 
	*/
	
	// Add your code here!
	

	/*
	* Destroy the dynamic variable at the end
	*/
	
	// Add your code here!
	
	
	return 0;
}