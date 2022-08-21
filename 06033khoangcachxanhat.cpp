#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		int n; cin>> n;
		int a[n]={}, ck[n]={};
		for(int i=0;i<n;i++) cin>> a[i];
		ck[n-1]=a[n-1];
		for(int i=n-2;i>=0;i--) ck[i]=max(ck[i+1],a[i]);
		int dem=-1;
		int i=0, j=0;
		while(i<n&&j<n)
		{
			if(ck[j]>a[i])
			{
				dem=max(dem,j-i);
				j++;
			}
			else i++;
		}
		if(!dem) dem=-1;
		cout<< dem<< endl;
	}
}
