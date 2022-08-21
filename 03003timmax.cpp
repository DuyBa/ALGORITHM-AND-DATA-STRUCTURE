#include<bits/stdc++.h>
long long M =1e9+7;
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n; cin>> n;
		long long a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		long long tong=0;
		for(int i=0;i<n;i++)
		{
			tong=(tong%M + a[i]*i%M)%M;
		}
		cout<< tong<< endl;
	}
}
