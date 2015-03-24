using namespace std;
#include <iostream>
#include <iomanip>

int main(){
	int a = 29;
	int b = 1001;
	cout  << a << setw(6) << b << endl;
	cout << setw(6) << a << b << endl;
	//第一个setw使b按域宽为6
	//相当于a和b这间加入两个空格
	//setw只对紧接着的元素有效
	//第二个setw只对a起作用所以b紧接着a输出
}
