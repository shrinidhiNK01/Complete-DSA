#include <iostream>
using namespace std;

int main(){
    int a;
    float b = 10.5F;    char c = 'A';
    double d = 10.5;
    long long e = 10000000000LL;
    long double f = 10.5L;

    cout << "Hello World" << endl;

    cin >> a;
    cout << a << endl;

    cout << sizeof(d) << endl;
    cout << sizeof(10.09L) << endl;

    int x = 10;
    cout << float(x) << endl;
    float y = 20;
    cout << int(y) << endl;

    return 0;
}