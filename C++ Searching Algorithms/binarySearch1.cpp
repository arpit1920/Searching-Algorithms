#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key) {

	sort(arr, arr+size);
	int start = 0;
	int end = size-1;
	int mid=start+(end-start)/2;

	while(start<=end) {
		if(arr[mid]==key) {
			return mid;
		}

		else if(arr[mid]>key) {
			end = mid-1;
		}

		else if(arr[mid]<key) {
			start = mid+1;
		}
		
      mid=start+(end-start)/2;
	}
	
	return -1;
}

int main() {
	int a[6] = {3, 11, 7, 27, 13, 9};
	int b[5] = {3, 11, 7, 27, 9};
	//[3,7,9,11,13,27]
	int result = binarySearch(a, 6, 11);
	int result1 = binarySearch(b, 5, 11);
	cout<<result<<endl;
	cout<<result1<<endl;
	return 0;
}