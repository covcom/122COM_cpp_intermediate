#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main( const int argc, const char *argv[] )
{
    vector<string> items( argv+1, argv+argc );    // put the command line arguments into vector

    /* COMPLETE ME - code should the values in the items vector
        seperated by commas in forward and then in revese order.

        items contains values supplied as command line arguments
        when running the program.

        You must use iterators to do this.

        E.g. if items contains the value 1, 2 and 3 then code should 
        output:
            1, 2, 3
        and 
            3, 2, 1
    */

    return 0;
}