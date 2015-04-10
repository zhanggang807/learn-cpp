using namespace std;
#include <iostream>
#include <complex>
#include <string>

template <class T>

//模板函数
void printer(complex<T> a){
    string str1("real is : "), str2("image is : ");
    cout << str1 << a.real() << " , " << str2 << a.imag() << endl;
}

int main(){
    return 0;
}
