#include <iostream>
#include <vector>
#include <numeric> 
#include <algorithm>
using namespace std;

int main()
{    
    vector<int> v { 2, 4, 6, 8, 10, 12 };
    
    // index iteration approach
    int total = 0;
    for( int i=0; i<v.size(); ++i )
        total += v[i];
    cout << total << endl;

    // functional programming and iterator approach
    cout << accumulate( v.begin(), v.end(), 0 ) << endl;

    /* parallel implementations coming soon? C++17 maybe?
    cout << reduce( parallel::par, v.begin(), v.end(), 0 ) << endl;
    */

    return 0;
}