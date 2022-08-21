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
		int a[10000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		int c=0,d=n-1;
		while(c<d)
		{
			cout<< a[d]<< " "<< a[c]<< " ";
			c++;
			d--;
		}
		if(n%2!=0) cout<< a[(n-1)/2];
		cout<< endl;
	}
}
