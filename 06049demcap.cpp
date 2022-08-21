#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		long long n, m, dem=0; cin>> n>> m;
		long long a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;i++)
		{
			long long res= a[i]+m-1;
			long long idx=upper_bound(a,a+n,res)-a;
			dem+=(idx-i-1);
		}
		cout<< dem<< endl;
	}
}
