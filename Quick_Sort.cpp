#include <bits/stdc++.h>

using namespace std;

int partition(int *a, int low, int high) {
	int pivot, i, j;
	pivot = a[high];
	i = (low - 1);
	for (j = low; j <= high - 1; j++) {
		if (a[j] < pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[high]);
	return (i + 1);
}

void quickSort(int *a, int low, int high) {
	int pi;
	if (low < high) {
		pi = partition(a, low, high);
		quickSort(a, low, pi - 1);
		quickSort(a, pi + 1, high);
	}
}

int main() {
	int arr[] = {10, 7, 8, 9, 1, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	cout << "Sorted array:" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
	return 0;
}
