using namespace std;
#include <iostream>

void swap(int[]);

int main(){
    int a[] = {3, 8};
    swap(a);
    cout << "返回后 : a = " << a[0] << " b = " << a[1] << endl;
    return 0;
}

void swap(int a[]){
    int temp =  a[0];
    a[0] = a[1];
    a[1] = temp;
    cout << "交换为 : a = " << a[0] << " b = " << a[1] << endl;
}
