#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; while(t--)
	{
		long long n;cin>> n;
		long long a[100000], ck=0; cin>> a[0];
		for(int i=1;i<n;i++)
		{
			cin>> a[i];
			if(a[i]<a[i-1]) ck=i;
		}
		cout<< ck<< endl;
	}
}
