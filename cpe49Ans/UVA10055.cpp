#include <iostream>
using namespace std;

int main()
{
    long long int test1, test2;

    while(cin >> test1 >> test2)
    {
        cout << abs(test1 - test2) << endl;    
    }   
    return 0;
}
