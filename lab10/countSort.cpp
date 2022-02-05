#include<iostream>
#include<algorithm>
using namespace std;
void display(int* arr, int size) {
    //Function to disolay the array
    for (int i = 1; i <= size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int getMax(int arr[], int size) {
    int max = arr[1];
    for (int i = 2; i <= size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max; //the max element from the array
}
void countSort(int* arr, int size) {
    //Code from geeks for geeks as it is already inveted
    //Programming Rule don't invent a new wheel just modified it according
    //to my needs
    int result[ 101];
    int max = getMax(arr, size);
    int count[ 101];     /*
                         As we cannot intialize it with max+1 that's why 
                         count and result are initialized with 101(dummy
                        */
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;

    }
    for (int i = 1; i <= size; i++) {
        count[arr[i]]++;//Calculating the duplicates
      }
        
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }
        //find cumulative frequency
    for (int i = size; i >= 1; i--) {
        result[count[arr[i]]] = arr[i];
        count[arr[i]] -= 1; //decrease count for same numbers
    }
    for (int i = 1; i <= size; i++) {
        arr[i] = result[i]; //store output array to main array
    }
}
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[100];       //create an array with given number of elements
    cout << "Enter elements:" << endl;
    for (int i = 1; i <= size; i++) {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, size);
    countSort(arr, size);
    cout << "Array after Sorting: ";
    display(arr, size);
}
