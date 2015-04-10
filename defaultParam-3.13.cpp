using namespace std;
#include <iostream>

int add(int m1 = 0, int m2 = 0, int m3 = 0, int m4 = 0){
    return m1 + m2 + m3 + m4;
}

int main(){
    cout << add(1, 3) << " , " << add(1, 3, 5) << " , " << add(1, 3, 5, 7) << endl;
    return 0;
}

//使用默认参数，就不能对少于参数个数的函数进行重载
//因为这样编译器决定不了使用哪个函数
//另外，仅有函数返回值不同也是区分不了重载函数的
