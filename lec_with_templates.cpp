#include <iostream>
#include <string>
using namespace std;

template<typename TYPE>
TYPE add( TYPE a, TYPE b )
{    
    return a + b;
}

int main()
{
    int i = add( 1, 2 );
    float f = add( 1.1f, 2.2f );

    cout << i << " " << f << endl;
}