#include<bits/stdc++.h>
using namespace std;
long long M= 1e9 +7;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int a[100000]={}, f[100000]={};
    	int n,m;
		cin>> n>> m;
		f[0]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(j<=i) f[i]=(f[i]+ f[i-j])%M;
			}
		}
		cout<< f[n]<< endl;
	}
}
