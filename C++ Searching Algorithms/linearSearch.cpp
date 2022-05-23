// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
  /*
  to get the size of an array, we use an approach of bits division.
  as size of int is 4 bits, so for five elements it will be 4*5=20
  and then 20 divide by size of first index of array = 4
  this implies, 20/4=5 which is size of an array
  We can also make a function call Size and call it everytime in our code to get size of an array.
  */
  	cout<<sizeof(arr)<<endl;
  	cout<<sizeof(arr[0])<<endl;
	int n = sizeof(arr) / sizeof(arr[0]);
  	cout<<"size of array "<<n<<endl;
	// Function call
	int result = search(arr, n, x);
	if (result == -1) {
		cout << "Element is not present in array";
      }
  	else {
      cout << "Element is present at index " << result;
    }
	return 0;
}

/*
The time complexity of the above algorithm is O(n).
Linear search is rarely used practically because other search algorithms
such as the binary search algorithm and hash tables allow significantly
faster-searching comparison to Linear search.
*/

// Contributed by Arpit Bhushan Sharma