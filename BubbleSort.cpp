// Bubble Sort. 
// p.85 C++ from the Ground Up 3rd ed.
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int nums[5];
	int m, n, i;
	int size;
	size = 5; // This is the number of elements to sort
	// Give the array some random initial values.
	for (i = 0; i < size; i++) nums[i] = rand();
	// Display original array.
	cout << "Original array is: ";
	for (i = 0; i < size; i++) cout << nums[i] << ' ';
	cout << '\n';
	// This is the bubble sort.
	for (m = 1; m<size; m++)
		for (n = size - 1; n >= m; n--) {
			if (nums[n - 1] > nums[n]) { // if numbers are out of order
				// then exchange elements
				i = nums[n - 1];
				nums[n - 1] = nums[n];
				nums[n] = i;
			}
		}
	// This is the end of the bubble sort.
	// Display sorted array.
	cout << "Sorted array is: ";
	for (i = 0; i < size; i++) cout << nums[i] << ' ';
	cout << '\n';
	system("pause");
	return 0;
}