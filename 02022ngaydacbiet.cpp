#include<bits/stdc++.h>

using namespace std;

int main()
{
    int years[8]={2000, 2002, 2020, 2022, 2200, 2202, 2220, 2222};
    string days[3]={"02", "20", "22"};
    for(int i = 0 ; i <= 2 ; i++)
    {
        for(int j = 0 ; j <= 7; j++)
        {
            cout << days[i] <<"/02/" << years[j];
            cout << endl;
        }
        
    }
    system("pause");
    return 0;
}
