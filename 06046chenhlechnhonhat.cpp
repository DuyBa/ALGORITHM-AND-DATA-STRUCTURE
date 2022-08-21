#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		int a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		int dc=a[1]-a[0];
		for(int i=0;i<n-1;i++)
			if(a[i+1]-a[i]<dc) dc=a[i+1]-a[i];
		cout<< dc<< endl;
	}
}
