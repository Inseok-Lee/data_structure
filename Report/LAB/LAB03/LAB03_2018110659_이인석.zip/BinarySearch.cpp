#include <iostream>
using namespace std;



// A. ���� Ž��(Binary Search)�� ���� �Լ� BinarySearch()�� �����Ѵ�.
int BinarySearch(int array[], int sizeOfArray, int value) {
	int first=0, last=sizeOfArray-1;
	int midPoint ;
	bool moreToSearch = (first <= last);

	while (moreToSearch) {
		midPoint = (first + last) / 2;
		int num = array[midPoint];


		if (first == last) {
			if (num == value) return midPoint;
			else return -1;
		}

		if (value < num) {
			last = midPoint - 1;

		}

		else if (value > num) {
			first = midPoint + 1;
		}

	}

}

//  B . BinarySearch�� '����'�Ͽ� ã���� �ϴ� ������ �۰ų� ���� ���� �߿��� ���� ū ���� �����ϰ� �Ϸ��� ��� �ϴ°�?
int BinarySearch_B(int array[], int sizeOfArray, int value) {
	int first = 0, last = sizeOfArray - 1;
	int midPoint;
	bool moreToSearch = (first <= last);

	while (moreToSearch) {
		midPoint = (first + last) / 2;
		int num = array[midPoint];


		if (first == last) {
			return array[midPoint] - 1;
		}

		if (value < num) {
			last = midPoint - 1;

		}

		else if (value > num) {
			first = midPoint + 1;
		}

	}

}

// C . BinarySearch�� '����' �Ͽ� ã���� �ϴ� ������ ũ�ų� ���� ���� �߿��� ���� ���� ���� �����ϰ� �Ϸ��� ��� �ϴ°�?
int BinarySearch_C(int array[], int sizeOfArray, int value) {
	int first = 0, last = sizeOfArray - 1;
	int midPoint;
	bool moreToSearch = (first <= last);

	while (moreToSearch) {
		midPoint = (first + last) / 2;
		int num = array[midPoint];


		if (first == last) {
			return array[midPoint] ;
		}

		if (value < num) {
			last = midPoint - 1;

		}

		else if (value > num) {
			first = midPoint + 1;
		}

	}

}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int result;
	result = BinarySearch(arr, 10, 11);
	cout << result << endl;
	result = BinarySearch(arr, 10, 7);
	cout << result << endl;
	result = BinarySearch_B(arr, 10, 7);
	cout << result << endl;
	result = BinarySearch_C(arr, 10, 7);
	cout << result << endl;
	return 0;

}