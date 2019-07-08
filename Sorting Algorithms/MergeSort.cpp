#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

void Merge(int* a, int low, int high, int mid) {
	int i, j, k;
	int* temp = new int[high - low + 1];
	i = low;
	j = mid+1;
	k = 0;

	while (i <= mid && j <= high) {
		if (a[i] < a[j]) {
			temp[k] = a[i];
			i++;
			k++;
		}
		else {
			temp[k] = a[j];
			j++;
			k++;
		}
	}

	while (i <= mid) {
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= high) {
		temp[k] = a[j];
		k++;
		j++;
	}

	for (int i = low; i <= high; i++) {
		a[i] = temp[i - low];
	}
}




void MergeSort(int* a, int low, int high) {
	int mid;
	if (low < high) {
		mid = (low + high) / 2;

		MergeSort(a, low, mid);
		MergeSort(a, mid + 1, high);

		Merge(a, low, high, mid);
	}
}

int main() {

	int n = 10;
	int i;

	int* arr = new int[n];

	srand((unsigned)time(0));

	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 10 + 1;
	}

	MergeSort(arr, 0, n - 1);

	// Printing the sorted data.
	cout << "Sorted Data ";
	for (i = 0; i < n; i++)
		cout << " " << arr[i];

	system("pause");
	return 0;
}

