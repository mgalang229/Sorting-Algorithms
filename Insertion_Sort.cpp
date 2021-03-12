#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[] = {5, 3, 4, 2, 1};
	int n = 5;
	cout << endl << "Insertion Sort..." << endl << endl;
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(a[i], a[min]);
		cout << "Pass " << i + 1 << "...." << endl;
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
