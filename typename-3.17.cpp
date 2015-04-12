//using namespace std;
#include <iostream>

template <typename T> //使用typename代替class

T max(T m1, T m2){
	return m1 > m2 ? m1 : m2;
}

template <typename T> //必须重写

T min(T m1, T m2){
	return m1 < m2 ? m1 : m2;
}

int main(){
	std::cout << max("ABC", "ABD") << " , " << min("ABC", "ABD") << " , "
		 << min('W', 'T') << " , " << min(2.0, 5.);
	std::cout << "\t" << min<double>(8.5, 6) << " , " << min(8.5, (double)6) << " , "
		 << max((int)8.5, 6);
	std::cout << "\t" << min<int>(2.3, 5.8) << " , " << max<int>('a', 'y') << " , "
		 << max<char>(95, 121) << std::endl;
}
