#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		int n, m, dem=0, ck[10000]={}; cin>> n>> m;
		int a[100000]={}, b[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<m;i++)
		{
			cin>> b[i];
			ck[b[i]]++;
		}
		sort(a,a+n); sort(b,b+m);
		for(int i=0;i<n;i++)
		{
			if(a[i]==1) dem+=ck[0];
			if(a[i]>1)
			{
				dem+=ck[0];
				dem+=ck[1];
			}
			if(a[i]==3)
			{
				dem+=ck[2];
				dem+=ck[4];
			}
			if(a[i]==2||a[i]==3)
			{
				 int idx= upper_bound(b,b+m,4)-b;
				if(idx<m) dem+=(m-1-(idx)+1);
			}
			if(a[i]>3)
			{
				 int idx= upper_bound(b,b+m,a[i])-b;
				if(idx<m) dem+=(m-1-(idx)+1);
			}
		}
		cout<< dem<< endl;
	}
}
