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




void bubbleSort(int* arr, int size) {
	

	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
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

	bubbleSort(a,n);
	

	
	for (int i = 0; i < n; i++)
		cout << " " << a[i];

	system("pause");
	return 0;
}

