#include<bits/stdc++.h>
using namespace std;
long long M= 1e9+7;
long long a[1000][1000], n;
long long qhd()
{
	memset(a,0,sizeof(a));
	if(n==2) return 55;
	long long chay=9;
	for(int i=1;i<=9;i++)
	{
		a[2][i]= chay; chay--;
	}
	long long tong=55;
	for(int i=3;i<=n;i++) 
	{
		for(int j=1;j<=9;j++)
		{
			for(int k=j;k<=9;k++) a[i][j]=(a[i][j]+a[i-1][k])%M;
			tong=(tong + a[i][j])%M;
		}
	}
	return tong;
}

main()
{
	int t;cin>> t; while(t--)
	{	
		cin>> n;
		if(n==1) cout<< 10<< endl;
		else
		{
			cout<< qhd()<< endl;;
		}	
	}
}
