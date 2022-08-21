#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n, m;
		for(int i=0;i<n;i++)
		{
			cin>> a[i];
			b[i]=a[i];
			if(a[i]%m==0) a[i]/=m;
		}
		int flag=0, dem=0, ans= INT_MAX;
		if(a[0]!=b[0]) flag=1;	
		for(int i=1;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				flag=1;
			}
			if(flag==1&& (a[i]!=b[i])) dem++;
			else 
			{
				flag=0;
				ans=min(ans, dem);
			}
		}
		cout<< ans<< endl;
	}
}
