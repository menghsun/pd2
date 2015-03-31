#include <iostream>
using namespace std;
int & add ( int x, int y)
{
        static int result;
        result = x + y;
        return result;
}
int nothing()
{
        int x = 0;
        return x;
}
int main()
{
    int & a = add(3, 5);
    cout << a << endl;
    nothing();
    cout << a << endl;
    return 0;
}
