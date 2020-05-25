#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* В стандартном потоке даны три строки, разделённые пробелом.
Каждая строка состоит из строчных латинских букв и имеет длину не более 30 символов.
Выведите в стандартный вывод лексикографически минимальную из них. */

int main() {
	vector<string> a;
	string min, x;
	int n = 3;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		a.push_back(x);
	}

	min = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	cout << min;

	return 0;
};