#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n, m;
		cin>> n>> m;
		int a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		int ck=a[0];
		for(int i=0;i<m;i++) ck= max(ck, a[i]);
		cout<< ck<< " ";
		for(int i=m;i<n;i++)
		{
			if(a[i]>=ck)
			{
				cout<< a[i]<< " ";
				ck=a[i];
			}
			else 
			{
				for(int j=i;j>i-m;j--) ck= max(ck,a[j]);
				cout<< ck<< " ";
			}
		}
		cout<< endl;
	}
}
