using namespace std;
#include <iostream>
#include <string>

string input(const int); //声明返回string类型的函数

int main(){
    int n;
    cout << "Input n = ";
    cin >> n;
    string str = input(n);
    cout << str << endl;
    return 0;
}

string input(const int n){
    string s1, s2;
    for(int i = 0; i < n; i++){
        cin >> s1;
        s2 = s2 + s1 + " ";
    }
    return s2;
}
