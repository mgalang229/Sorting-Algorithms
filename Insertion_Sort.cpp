#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[] = {5, 3, 4, 2, 1};
	int n = 5;
	int i, j;
	cout << endl << "Insertion Sort..." << endl << endl;
	for (i = 1; i < n; i++) {
		int tmp = a[i];
		for (j = i; j > 0 && tmp < a[j - 1]; j--) {
			a[j] = a[j - 1];
		}
		a[j] = tmp;
		cout << "Pass " << i << "...." << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
