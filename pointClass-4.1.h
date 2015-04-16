class Point {
	private :
		int x, y; //不能在类体内给成员变量赋值
	public :
		void setxy(int a, int b); //这里只是声明函数
		void move(int a, int b);
		void display();
		int getx();
		int gety();
};

//如果在类声明时直接给出了函数的具体实现
//则默认此函数为内联函数


//一般类的声明放到.h文件中
//类的实现放到.cpp中, need include .h
//另写一个.cpp用main函数使用, need include .h too.
