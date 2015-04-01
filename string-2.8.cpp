using namespace std;
#include <iostream>
#include <string>

int main(){
    string str1("we are here!");
    string str2 = "where are you?";
    cout << str1[0] << " , " << str1[11] << " , " << str1 << endl;
    cout << str2[0] << " , " << str2[13] << " , " << str2 << endl;
    cout << "please input a word : ";
    cin >> str1;
    cout << "length of the " << str1 << "is : " << str1.size() << "." << endl;
    return 0;
}
