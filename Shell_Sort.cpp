#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[] = {5, 3, 4, 2, 1};
	int n = 5;
	int i, j;
	cout << endl << "Shell Sort..." << endl << endl;
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i++) {
			int temp = a[i];
			int j;
			for (j = i; j >= gap && a[j - gap] > temp; j -= gap) {
				a[j] = a[j - gap];
			}
			a[j] = temp;
			cout << "Pass " << i << ", Gap " << gap << "...." << endl;
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
