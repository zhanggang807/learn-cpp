using namespace std;
#include <iostream>
#include "pointClass-4.1.h"

void print(Point a){
    a.display();
}

int main(){
    Point a, b;
    a.setxy(25, 55);
    b = a;
    a.display();
    a.move(-10, 20);
    print(a);
    print(b);
    cout << a.getx() << endl;

    Point *p = &a; //使用指针
    p -> display();

    Point &r = b; //使用引用
    r.display();

    return 0;
}

//请使用:g++ usePointClass-4.2.cpp pointClassImpl-4.1.cpp
//多文件编译命令来编译此测试程序
