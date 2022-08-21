#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
	memset(a,0,sizeof(a));
	int t; cin>> t; cin.ignore();
	for(int i=1;i<=t;i++)
	{
		string s; 
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss>> tmp)
		{
			if(tmp[1]!=':')
			{
				stringstream s1(tmp);
				int x=0; s1>> x;
				a[i][x]= 1;
			}
		}
	}
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=t;j++) cout<< a[i][j]<< " ";
		cout<< endl;
	}
}
