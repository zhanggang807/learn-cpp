//1.2.5.2 指向常量的指针
const int y = 58;
const int *p = &y;
int x = 45;
const int *p1 = &x;

//1.2.5.3 常量指针
int x = 5;
int * const p = &x;

//1.2.5.4 指向常量的常量指针
int x = 2;
const int * const p = &x;

//声明指针变量
string str1 = "dean";
string *s1 = &str1;
