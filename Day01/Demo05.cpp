//变量
#include <iostream>

using namespace std;
extern int a,b;
extern int c;
extern float f;
extern bool boo;

int main()
{
    int a,b;
    int c;
    float f;
    bool boo;

    a = 10;
    b = 10;
    c = a + b;
    cout << c << endl;

    boo = true;
    cout << boo;

    f = 70.0/3.0;
    cout << f << endl;

    return 0;
}
