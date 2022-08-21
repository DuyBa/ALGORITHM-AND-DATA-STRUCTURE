#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m;
		cin>> n>> m;
		int a[10000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		for(int i=0;i<m;i++)
		{
			cout<< a[n-1]<< " ";
			n--;
		}
		cout<< endl;
	}
}
