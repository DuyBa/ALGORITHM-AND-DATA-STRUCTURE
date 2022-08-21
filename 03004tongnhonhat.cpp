#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n;
		long long a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		long long n1=0, n2=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0) n1=n1*10+a[i];
			else n2=n2*10+a[i];
		}
		cout<< (long long) n1+ n2<< endl;
	}
}
