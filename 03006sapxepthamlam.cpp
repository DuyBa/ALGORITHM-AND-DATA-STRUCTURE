#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n;
		int a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		int idx;
		idx=(n-1)/2;
		for(int i=0;i<=idx;i++) if(a[i]>a[n-1-i]) swap(a[i],a[n-1-i]);
		int ck=0;
		for(int i=0;i<n-1;i++) 
		{
			if(a[i+1]<a[i])
			{
				cout<< "No";
				ck=1;
				break;
			}
		}
		if(ck==0) cout<< "Yes";
		cout<< endl;
	}
}
