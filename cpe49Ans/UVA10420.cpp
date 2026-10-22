#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;
    int t = 0; //測資
    string s;
    map <string, int> mp;
    cin >> t;
    while(t--)
    {
        cin >> s;
        mp[s]++;
        getline(cin, s);
    }

    for(auto i: mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}
