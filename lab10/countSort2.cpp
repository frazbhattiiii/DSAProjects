#include<iostream>
#include<algorithm>
#include<string>

#include<vector>
using namespace std;
void display(int* arr, int size) {
    //Function to disolay the array
    for (int i = 1; i <= size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

vector<vector<string>> countSort(vector<vector<string>> arr) {
	int size = arr.size();
	vector<int> count(size);
	for (int i = 0; i < size; i++) { //measuring frequency of each array
		count[stoi(arr[i][0])]++;
	}
	for (int i = 1; i < count.size(); i++) {
		count[i] += count[i - 1];
	}
	vector<vector<string>> sortedArray(size, vector<string>(arr[0].size()));
	for (int i = size - 1; i >= 0; i--) {
		sortedArray[count[stoi(arr[i][0])] - 1][0] = arr[i][0];
		sortedArray[count[stoi(arr[i][0])] - 1][1] = arr[i][1];
		count[stoi(arr[i][0])]--;
	}
	return sortedArray;


}
void print(vector<vector<string>> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][1] << " ";
	}
}

void printTogether(vector<vector<string>> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][0] << "   " << arr[i][1] << endl;
	}
}



int main() {
	vector<vector<string>> arr = {
		{"0", "ab"},
		{"6","cd"},
		{"0", "ef"},
		{"6", "gh"},
		{"4", "ij"},
		{"0", "ab"},
		{"6", "cd"},
		{"0", "ef"},
		{"6", "gh"},
		{"0", "ij"},
		{"4", "that"},
		{"3", "be"},
		{"0", "to"},
		{"1", "be"},
		{"5", "question"},
		{"1", "or" },
		{"2", "not"},
		{"4", "is"},
		{"2", "to"},
		{"4", "the"}
	};
	cout << "Entered Array: " << endl;
	printTogether(arr);
	for (int i = 0; i < arr.size() / 2; i++) {
		//For printing half of the Array
		arr[i][1] = "-";
	}
	vector<vector<string>> sortedArray = countSort(arr);
	//Calling the funnction to have the sortedArray
	cout << "Data after Sorting : " << endl;
	printTogether(sortedArray);
		cout << " Output : " << endl;
	print(sortedArray);
	

}
