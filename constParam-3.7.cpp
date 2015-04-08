using namespace std;
#include <iostream>
#include <string>

void change(const string &);

int main(){
	string str("Can you change it ?");
	change(str);
	cout << str << endl;
	return 0;
}

void change(const string & s){
	string s2 = s + " No !";
	cout << s2 << endl;
}
