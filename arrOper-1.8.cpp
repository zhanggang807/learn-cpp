using namespace std;
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>

int main(){
	double a[] = {1.1, 4.4, 3.3, 2.2};
	double b[8] = {8};
	copy(a + 2, a + 4, ostream_iterator<double>(cout, " ")); //a[2] a[3]
	cout << endl;
	reverse_copy(a + 1, a + 4, ostream_iterator<double>(cout, " ")); //a[3]~a[1]
	cout << endl;

	copy(a, a + 4, &b[4]); //from tail of array b
	copy(b, b + 8, ostream_iterator<double>(cout, " "));
	cout << endl;

	sort(a + 1, a + 3); // sort part of array
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;

	sort(b, b + 6, greater<double>());
	copy(b, b + 8, ostream_iterator<double>(cout, " "));
	cout << endl;

	return 0;	
}
