#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> seq { 11, 22, 33, 44, 55 };

    // traditional index based iteration of a sequence;
    for( int i=0; i<seq.size(); ++i )
        cout << seq[i] << endl;

    // iteration of a sequence using iterators
    for( vector<int>::iterator it=seq.begin(); it!=seq.end(); it=next(it) )
        cout << *it << endl;

    /* iteration using iterators, note that the "it" variable is still of type 
        vector<int>::iterator, using auto simply means that we don't have to 
        type all that and the compiler figures it out for us */
    for( auto it=seq.begin(); it!=seq.end(); it=next(it) )
        cout << *it << endl;

    return 0;
}