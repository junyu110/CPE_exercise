#include <bits/stdc++.h>
using namespace std;

int f91(int N)
{
    if(N >= 101)
        return N -= 10;
    else
        return f91(f91(N + 11));
}

int main()
{
    int N = 0;
    while(cin >> N)
    {
        if(N == 0)
            return 0;
        else    
            cout << "f91(" << N << ") = " << f91(N) << "\n";
    }
}