#include <bits/stdc++.h>
using namespace std;

long long int g(long long int n)
{
    if(n < 10)
        return n;
    else
    {
        long long int sum = 0;
        while(n > 0)
        {
            sum += (n % 10);
            n /= 10;
            
        }
        return g(sum);
    }
    
}

int main()
{
    long long int n = 0;
    while(cin >> n)
    {
        if(n == 0)
            return 0;
        
        cout << g(n) << "\n";
    }
    return 0;
}