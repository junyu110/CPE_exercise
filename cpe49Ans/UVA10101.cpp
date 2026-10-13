#include <bits/stdc++.h>
using namespace std;

void Bangle(long long int N)
{
    while(N>0)
    {
        if(N >= 10000000)
        {
            cout << " " << N / 10000000 << " kuti";
            N %= 10000000;
            continue; 
        }
        else if(N < 10000000 && N >= 100000)
        {
            cout << " " << N / 100000 << " lakh";
            N %= 100000;
            continue;
        }
        else if(N < 100000 && N >= 1000)
        {
            cout << " " << N / 1000 << " hajar";
            N %= 1000;
            continue;
        }
        else if(N < 1000 && N >= 100)
        {
            cout << " " << N / 100 << " shata";
            N %= 100;
            continue; 
        }
        else
        {
            cout << " " << N;
            break;
        }
    }
}
int main()
{
    long long int N;
    int T = 1;
    while(cin >> N)
    {
        cout << setw(4) << setfill(' ') << T << ".";
        if(N == 0)
            cout << " " << 0;
        if(N >= 10000000)
        {
            Bangle(N / 10000000);
            cout << " kuti";
            Bangle(N % 10000000);
        }
        else
        {
            Bangle(N);
        }
        cout << "\n";
        T++;
    }
    return 0; 
}