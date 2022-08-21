#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		int n, a[11]={};
		cin>> n;
		string s[n];
		for(int i=0;i<n;i++)
		{
			cin>> s[i];
			for(int j=0;j<s[i].size();j++)
			{
				int k=(s[i][j]-'0');
				a[k]++;
			}
		}
		for(int i=0;i<10;i++) if(a[i]>0) cout<< i<< " ";
		cout<< endl;
	}
}
