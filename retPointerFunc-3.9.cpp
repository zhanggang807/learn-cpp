using namespace std;
#include <iostream>

float * input(int &); //声明返回指针的函数

int main(){
    int num;
    float * data;
    data = input(num);
    if(data){
        for(int i = 0; i < num; i++){
            cout << data[i] << " ";
        }
        delete data; //由主函数调用input函数，所以由主函数负责释放分配的内存
        cout << endl;
    }
    return 0;
}

float * input(int &n){
    cout << "Input a number : ";
    cin >> n;
    if(n <= 0){
        return  NULL;
    }
    float *buf = new float[n];
    if( buf == 0){
        return NULL;
    }
    for(int i = 0; i < n; i++){
        cin >> buf[i];
    }
    return buf;
}
