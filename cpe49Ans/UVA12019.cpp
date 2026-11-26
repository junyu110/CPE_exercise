#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while(t--)
    {
        string D[7] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int m, d, days = 0;
        cin >> m >> d;

        for(int i = 0; i < m; i++)
        {
            d += day[i];
        }
        d %= 7;
        cout << D[d] << endl;
    }
    return 0;
}
