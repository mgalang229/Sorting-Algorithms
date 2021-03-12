#include <bits/stdc++.h>

using namespace std;

void merge(int *a, int l, int m, int r) {
	int i, j, k;
	int *L, *R;
	int n1 = (m - l) + 1;
	int n2 = r - m;
	L = new int[n1];
	R = new int[n2];
	for (i = 0; i < n1; i++) {
		L[i] = a[l + i];
	}
	for (j = 0; j < n2; j++) {
		R[j] = a[m + 1 + j];
	}
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		} else {
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		a[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		a[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int *a, int l, int r) {
	if (l < r) {
		int m = (l + (r - 1)) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

int main() {
	int arr[] = {12, 11, 13, 5, 6, 7};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << "Given array is:" << endl;
	for (int i = 0; i < arr_size; i++) {
		cout << arr[i] << " ";
	}
	mergeSort(arr, 0, arr_size - 1);
	cout << endl << "Sorted array is:" << endl;
	for (int i = 0; i < arr_size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
