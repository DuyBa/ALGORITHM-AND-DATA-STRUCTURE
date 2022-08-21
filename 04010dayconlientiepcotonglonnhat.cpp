#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int a[10000]={}, ck=0;
		long long tong=0;
		int n, m=-99999;
		cin>> n;
		for(int i=0;i<n;i++) 
		{
			cin>> a[i];
			if(a[i]>=0) ck=1;
		}
		if(ck==0)
		{
			sort(a,a+n);
			cout<< a[n-1]<< endl;
		}
		else 
		{
			for(int i=0;i<n;i++)
	    	{
	    		tong+=a[i];
	    		if(tong<0) tong=0;
	    		if(tong>m) m=tong;   		
    		}
    		cout<< m<< endl;
		}
	}
}
