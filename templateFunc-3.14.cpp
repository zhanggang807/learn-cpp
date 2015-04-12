//using namespace std;
#include <iostream>

template <class T>

T max(T m1, T m2){
	return m1 > m2 ? m1 : m2;
}

int main(){
	std::cout << max(2, 5) << "\t" << max(2.0, 5.) << "\t"
		 << max('w', 'a') << "\t" << max("ABC", "ABD") << std::endl;
	return 0;
}

//自定义的max函数和namespace std里的max重复了
//所以编译不过去。造成了二义性所以屏蔽掉
//然后使用显示的引用std，编译通过
