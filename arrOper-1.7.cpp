using namespace std;
#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>

int main(){
    double a[] = {1.1, 4.4, 3.3, 2.2};

    cout << "升序提序后 : ";
    sort(a, a + 4);
    copy(a, a + 4, ostream_iterator<double>(cout, ""));
    cout << endl;
 
    cout << "降序提序后 : ";
    sort(a, a + 4, greater<double>());
    copy(a, a + 4, ostream_iterator<double>(cout, ""));
    cout << endl;
 
    double * x = find(a, a + 4, 4.4);
    if (x == a + 4){
        cout << "没有值为4.4的数组元素";       
    } else {
        cout << "有值为" << *x << "的数组元素"; 
    }
    cout << endl;
    
    x = find(a, a + 4, 8);
    if (x == a + 4){
        cout << "没有值为8的数组元素";       
    } else {
        cout << "有值为" << *x << "的数组元素"; 
    }
    cout << endl;

    return 0;
}
