#include <iostream>
using namespace std;

void func(int & y, int z)
{
    int x;
    printf("In func():\n &x = %u\n", &x );
    printf("&y = %u\n", &y );
    printf("&z = %u\n", &z );
}
int main()
{
    int autovar;
    int & autoref = autovar;
    printf("In main():\n&autovar = %u\n", &autovar );
    printf("&autoref = %u\n", &autoref );
    func(autovar, autovar);
    func(autoref, autoref);
    return 0;
}
