using namespace std;
#include <iostream>
#include <string>

//测试一下值传递

void swap(string, string);

int main(){
    string str1 = "现在";
    string str2 = "过去";
    swap(str1, str2);
    cout << "返回后 : str1 = " << str1 << " str2 = " << str2 << endl;
    return 0;
}

void swap(string s1, string s2){
    string temp = s1;
    s1 =s2;
    s2 = temp;
    cout << "交换为 : str1 = " << s1 << " str2 = " << s2 << endl;
}

//直接使用基本数据类型的对象，或使用类和结构的对象作为参数
//均是传值方式，不能将数组的值作为函数参数，但可以将数组的
//地址值作为函数参数，即使用指针作为参数。
