#include <bits/stdc++.h>
using namespace std;

int main()
{
    string T;
    int gap = 0;
    while(getline(cin, T))
    {
        for(int i = 0; i < T.length(); i++)
        {
            if(T[i] == '"' && gap == 0)
            {
                cout << "``";
                gap++;
            }
            else if(T[i] == '"' && gap == 1)
            {
                cout << "''";
                gap--;
            }
            else
                cout << T[i];
        }
        cout << "\n";
    }
    return 0;
}