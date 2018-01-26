#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> seq { 11, 22, 33, 44, 55 };

    // prints 11
    cout << *seq.begin() << endl;

    // both print 55
    cout << *prev( seq.end() ) << endl; 
    cout << *(seq.end()-1) << endl;

    // prints 5 because seq contains 5 elements
    cout << seq.end() - seq.begin() << endl; 

    /* prints random value, value at 
       seq.end() is NOT part of the vector */
    cout << *seq.end() << endl;   

    return 0;
}