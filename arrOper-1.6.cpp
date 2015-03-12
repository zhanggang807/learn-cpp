using namespace std;
#include <iostream>
#include <algorithm>
#include <iterator>

int main(){
    double a[] = {1.1, 4.4, 3.3, 2.2,};
    double b[4];

    cout << "正向输出        : ";
    copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;
    
    cout << "反向输出        : ";
    reverse_copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;
    
    cout << "复制给b输出     : ";
    copy(a, a + 4, b);
    copy(b, b + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    cout << "升序输出        : ";
    sort(a, a + 4);
    copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    cout << "反向复制给b输出 : ";
    reverse_copy(a, a + 4, b);
    copy(b, b + 4, ostream_iterator<double>(cout, " "));
    cout << endl;

    return 0;
}
