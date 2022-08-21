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
		int b1=a[0], b2=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]!=b1)
			{
				b2=a[i];
				break;
			}
		}
		if(b1!=b2) cout<< b1<< " "<< b2<< endl;
		else cout<< -1<< endl;
	}
}
