using namespace std;
#include <iostream>

int main(){
    double *p;
    p = new double [3];

    for (int i = 0; i < 3; i++){
        cin >> *(p + 1);
    }

    for (int i = 0; i < 3; i++){
        cout << *(p + 1) << " ";
    }
    cout << endl;

    delete p;
    return 0;
}
