using namespace std;
#include <iostream>
#include <string>

void swap(string&, string&);

int main(){
    string str1("现在"), str2("过去"); 
    swap(str1, str2);
    cout << "返回后 : str1 = " << str1 << " str2 = " << str2 << endl;
    return 0;
}

void swap(string &s1, string &s2){//使用引用对象做为参数
    string temp = s1;
    s1 = s2;
    s2 = temp;
    cout << "交换为 : str1 = " << s1 << " str2 = " << s2 << endl;
}

//引用对象不是一个独立的对象，不单独占用存内单元，而对象指针则
//要另开辟内存单元，所以传引用比传指针好
