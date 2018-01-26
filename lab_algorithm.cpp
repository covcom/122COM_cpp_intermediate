#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main( const int argc, const char *argv[] )
{
    vector<string> items( argv+1, argv+argc );    // put the command line arguments into vector

    cout << "The items are:" << endl;            // print list of arguments
    for( string &i : items )
        cout << "    " << i << endl;

    cout << "The permutations are:" << endl;
    /* COMPLETE ME - code should print every possible combination
        of the values stored in items seperated by commas.
        Make sure to research the <algorithm> library.

        items contains values supplied as command line arguments
        when running the program.

        E.g. if items contains the value 3, 2, 1 then code should 
        output:
            1, 2, 3, 
            1, 3, 2, 
            2, 1, 3, 
            2, 3, 1, 
            3, 1, 2, 
            3, 2, 1, 

        The order of the permutations does not matter although the 
        order of values in each permutation obviously does. */

    return 0;
}