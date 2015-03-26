using namespace std;
#include <iostream>
#include <iomanip>

const double PI = 3.141592;

int main(){
   cout << PI << endl
        << setprecision(0) << PI << endl
        << setprecision(1) << PI << endl
        << setprecision(2) << PI << endl
        << setprecision(3) << PI << endl
        << setprecision(7) << PI << endl;//设置精度

   int b = 100;
   cout << "Dec:" << dec << b << endl
        << "Hex:" << hex << b << endl
        << "Oct:" << oct << b << endl;

   cout << b << endl << 100 << endl << "Input b = ";
   cin >> b;
   cout << b << endl;
   cout << dec << setiosflags(ios_base::showpos) << b << endl;//设置显示正负符号
   cout << "Input b = ";
   cin >> b ;
   cout << b << endl;
   cout << resetiosflags(ios_base::showpos);//清除设置,单独使用无效
   cout << b << endl;
   
   return 0;
   //要求输入的地方都输入100
}
