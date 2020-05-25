/*
Дана строка. Найдите в этой строке второе вхождение буквы f и выведите индекс этого вхождения.
Если буква f в данной строке встречается только один раз, выведите число - 1, 
а если не встречается ни разу, выведите число - 2. Индексы нумеруются с нуля.

comfort	-1
coffee	3
car	-2

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int search_result = -2;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == 'f') {
            if (search_result == -1) {
                search_result = i;
                break;
            }
            else {
                ++search_result;
            }
        }
    }
    cout << search_result;

    return 0;
}

