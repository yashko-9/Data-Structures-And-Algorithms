#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

void quickSort(int* arr, int left, int right) {
	int i = left;
	int j = right;
	int tmp;

	int pivot = arr[(left + right) / 2];

	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}

	};
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);


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

	quickSort(a, 0, 9);

	for (int i = 0; i < n; i++)
		cout << " " << a[i];
	cout << endl;



	system("pause");
	return 0;
}