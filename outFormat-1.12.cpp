using namespace std;
#include <iostream>
#include <iomanip>

int main(){
	cout << setfill('*')//空折时用什么填充
		 << setw(0) << 15 << endl
		 << setw(1) << 15 << endl
		 << setw(2) << 15 << endl
		 << setw(3) << 15 << endl
		 << setw(4) << 15 << endl;
	cout << setw(16) << setfill('*') << " " << endl;
	cout << setiosflags(ios_base::right)//居右输出
		 << setw(5) << 1
		 << setw(5) << 2
		 << setw(5) << 3 << endl;

	cout << resetiosflags(ios_base::right);//必须先清除标志
	cout << setiosflags(ios_base::left)//居左输出
		 << setw(5) << 1
		 << setw(5) << 2
		 << setw(5) << 3 << endl;

	return 0;
}
