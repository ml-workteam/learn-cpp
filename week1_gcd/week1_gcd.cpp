// В stdin даны два натуральных числа. Выведите в stdout их наибольший общий делитель.
/*
25 27	1
12 16	4
13 13	13
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    /*
    do {
        if (a > b) {
            a = a - b;
        }
        else {
            if (a < b) {
                b = b - a;
            }
        }
    } while (a != b);*/

    while ((a > 0) && (b > 0)) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    cout << a+b;

    return 0;
}

