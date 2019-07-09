#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

void insertionSort(int *arr, int size) {
	int tmp, j;
	for (int i = 1; i < size; i++)
	{
		tmp = arr[i];
		j = i - 1;
		while (tmp < arr[j] && j >= 0 )
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = tmp;
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

	insertionSort(a, n);
	

	
	for (int i = 0; i < n; i++)
		cout << " " << a[i];

	system("pause");
	return 0;
}

