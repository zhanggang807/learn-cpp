using namespace std;
#include <iostream>
#include "pointClass-4.1.h"

void Point :: setxy(int a, int b){
    x = a;
    y = b;
}

void Point :: move(int a, int b){
    x = x + a;
    y = y + b;
}

void Point :: display(){
    cout << x << " , " << y << endl;
}

int Point :: getx(){
    return x;
}

int Point :: gety(){
    return y;
}

//也可以定义成内联函数
//在声明类时如果在类体内给出了成员函数的实现
//则默认为内联函数
//inline int Point :: getx(){
//   return x;
//}
