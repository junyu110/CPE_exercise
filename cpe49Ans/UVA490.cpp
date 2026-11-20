#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t, r[100] = {""};
    int i = 0, num = 0, maxline = 0;
    while(getline(cin, t))
    {
        r[i] = t;                                           
                                                            
        if(r[i].length() > maxline)
            maxline = r[i].length();
        
        i++;
    }
    num = i;
    for(i = 0; i < maxline; i++)
    {
        int gap = 0;
        for(int j = num - 1; j >= 0; j--)
        {
            if(i >= r[j].length())
            {
                gap++;
            }
            else
            {
                while(gap > 0)
                {
                    cout << " ";
                    gap--;
                }
                cout << r[j][i];
            }
        }
        cout << endl;
    }
    return 0;
}