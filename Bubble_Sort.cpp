#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[] = {5, 3, 4, 2, 1};
	int n = 5;
	int last = n - 1;
	cout << "Bubble Sort..." << endl << endl;
	for (int i = 0; i < last; i++) {
		for (int j = last; j > i; j--) {
			if (a[j - 1] > a[j]) {
				swap(a[j], a[j - 1]);
			}
		}
		cout << "Pass " << i + 1 << "...." << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
