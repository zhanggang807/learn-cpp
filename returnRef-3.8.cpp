using namespace std;
#include <iostream>

int a[] = {2, 4, 6 ,8 , 10, 12};

int& index(int i); //返回引用的函数

int main(){
	index(3) = 16; //一般情况下函数是不能直接用在赋值运算符左边的
	cout << index(3) << endl;
	for (int i = 0; i < 6; i++){
		cout << a[i] << " , ";
	}
	cout << endl;
	return 0;
}

int& index(int i){
	return a[i];
}

//返回引用的函数主要是为了将该函数用在赋值运算符的左边
