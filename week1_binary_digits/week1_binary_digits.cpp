/*
На вход дано целое положительное число N. Выведите его в двоичной системе счисления без ведущих нулей.

5	101
32	100000
1	1
0   0
2   10
3   11
4   100

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, r;
    cin >> n;
    vector<int> lst;
    while (n >= 2) {
        r = n % 2;
        n = n / 2;
        lst.push_back(r);
    }
    if ((n > 0) || lst.size() == 0) {
        cout << n;
    }
    for (int i = lst.size() - 1; i >= 0; --i) {
        cout << lst[i];
    }

    return 0;
}

