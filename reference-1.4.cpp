using namespace std;
#include <iostream>

int main(){
    int x = 56;
    int& a = x;
    int& r = a;

    cout << "x = " << x << ", &x = " << &x << ", a = " << a << ", &a = " << &a << ", r = " << r << ", &r = " << &r << endl;
    r = 25;
    cout << "x = " << x << ", &x = " << &x << ", a = " << a << ", &a = " << &a << ", r = " << r << ", &r = " << &r << endl;
    return 0;
}

//&的位置是无关紧要的
//int& a = x;
//int & a = x;
//int &a = x;
//引用就是为了别名而存在的
//对别名的改动就是对正名的改动
//引用就是将一个新标识和一块已经存在的存储区域相关联
//引用通常用于函数的参数表中或者作为函数的返回值
//引用实际上就是变量的别名
