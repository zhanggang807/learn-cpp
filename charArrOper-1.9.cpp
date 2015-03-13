using namespace std;
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>

int main(){ 
    char a[] = "wearehere!";
    char b[11];
    reverse(a, a + 10);
    copy(a, a + 10, ostream_iterator<char>(cout));
    cout << endl;
    copy(a, a + 11, b); //原样复制到数组b

    sort(a, a + 10);
    cout << a << endl;
    cout << b << endl;
    reverse_copy(a, a + 10, b); //逆向复制到数组b
    cout << b << endl;

    reverse(b + 2, b + 8); //数组b部分逆向
    copy(b + 2, b + 8, ostream_iterator<char>(cout));
    cout << endl;

    sort(a, a + 10, greater<char>());
    cout << a << endl;
    cout << (* find(a, a + 10, 'e') == 'e') << " " << (* find(a, a + 10, 'O') == 'O') << endl;

    return 0;
}
