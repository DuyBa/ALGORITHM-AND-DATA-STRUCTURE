#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m, a[10000]={}, b[10000]={};
		cin>> n>> m;
		for(int i=0;i<n;i++)
		{
			cin>> a[i];
			b[a[i]]++;
		} 
		sort(a,a+n);
		int d=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]+a[i]==m) d++;
			}
		}
		cout<< d<< endl;
	}
}
