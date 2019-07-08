#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swapII(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}


void selectionSort(int *arr, int size) {
	int  minIndex;
	for (int i = 0; i < size - 1; i++) {
		minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}



int main() {

	int n = 10;
	

	int* a = new int[n];

	srand((unsigned)time(0));

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < n; i++)
		cout << " " << a[i];
	cout << endl;

	selectionSort(a, n);
	

	
	for (int i = 0; i < n; i++)
		cout << " " << a[i];

	system("pause");
	return 0;
}

