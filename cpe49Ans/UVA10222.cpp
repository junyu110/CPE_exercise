#include <bits/stdc++.h>
using namespace std;

int main()
{
    string kb = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string kbI;

    while(getline(cin, kbI))
    {
        for(int i = 0; i < kbI.length(); i++)
        {
            if(kbI[i] >= 'A' && kbI[i] <= 'Z')
                kbI[i] = tolower(kbI[i]);

            if(kbI[i] == ' ')
                cout << kbI[i];
            else
                cout << kb[kb.find(kbI[i])-2] ;
        }
        cout << "\n";
    }
    return 0;
}