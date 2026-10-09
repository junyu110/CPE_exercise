#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string n;
    
    while(cin >> n)
    {
        if(n == "0")
            return 0;
        
        int odd = 0, even = 0;

        for(int i = 0; i < n.length(); i++)
        {
            if(i % 2 == 0)
                even += (n[i] - '0');
            else
                odd += (n[i] - '0');
        }    
        int test = abs(even - odd);

        if(test % 11 == 0)
            cout << n << " " << "is a multiple of 11.\n";
        else 
            cout << n << " " << "is not a multiple of 11.\n";
    }
    return 0;
}