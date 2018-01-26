#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>
#include <list>
#include <array>
#include <iterator>
using namespace std;

/* COMPLETE ME - complete the template definition of the add_together()
    function.
    
    add_together() should take two iterators as its input parameters.
    These iterators represent the beginning and end of the sequence to be 
    added together.

    A useful hint, if you want to know the variable type that an iterator
    contains you can use the following code:
        typename iterator_traits<ITER>::value_type
    Where ITER is either a template placeholder or an actual iterator.
    This line can be used to specify variable or function return types.

    For example:
        vector<int> v {1, 2, 3};
        vector<int>::iterator it = v.begin();

        typename iterator_traits<it>::value_type intValue = *it;
    */

int main()
{
    int errors = 0;

    vector<int> intItems { 1, 2, 3, 4, 5 };
    array<float,5> floatItems { 1.1, 2.2, 3.3, 4.4, 5.5 };
    list<unsigned int> uintItems { 858993455, 858993456, 858993457, 858993458, 858993459 };
    
    int intAnswer = add_together( intItems.begin(), intItems.end() );
    int intExpected = 15;
    if( intAnswer != intExpected )
    {
        cerr << "add_together() did not work correctly when tested with ints or vectors" << endl
            << "  Expected " << "" << " but recieved " << intAnswer << " instead" << endl;
        errors += 1;
    }

    float floatAnswer = add_together( floatItems.begin(), floatItems.end() );
    float floatExpected = 16.5;
    if( floatAnswer != floatExpected )
    {
        cerr << "add_together() did not work correctly when tested with floats or arrays" << endl
            << "  Expected " << "" << " but recieved " << floatAnswer << " instead" << endl;
        errors += 1;
    }

    unsigned int uintAnswer = add_together( uintItems.begin(), uintItems.end() );
    unsigned int uintExpected = 4294967285;
    if( uintAnswer != uintExpected )
    {
        cerr << "add_together() did not work correctly when tested with uints or lists" << endl
            << "  Expected " << uintExpected << " but recieved " << uintAnswer << " instead" << endl;
        errors += 1;
    }

    cout << "There were " << errors << " errors." << endl;

    return errors;
}
