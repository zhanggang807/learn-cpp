using namespace std;
#include <iostream>

inline int isnumber(char);

int main(){
    char c;
    cin >> c;
    if (isnumber(c)){
        cout << "You entered a digit." << endl;
    } else {
        cout << "You entered a non-digit." << endl;
    }
    return 0;    
}

inline int isnumber(char c){ //声明为内联函数
    return (c >= '0' && c <='9') ? 1 : 0;
}

//内联函数，编译器在编译时会用函数体里的内容
//直接替换掉方法调用的地方
//函数体内有循环和switch语句时不能声明为内联函数
//内联函数必须在第一次调用语句之前定义，先声明后
//定义也可以，亲测有效
