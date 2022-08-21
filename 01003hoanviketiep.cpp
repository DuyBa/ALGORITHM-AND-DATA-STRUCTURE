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
		int d1=-1,d2;
		for(int i=n-1;i>=0;i--) 
		{
			if(a[i-1]<a[i]) 
			{
			    d1=i-1;
				break;
			}
		}
		if(d1==-1) for(int i=0;i<n;i++) cout<< i+1<< " ";
		else 
		{
						int lon=a[d1+1], l=d1+1;
			for(int i=d1+1;i<n;i++)
			{
				if(a[i]>a[d1]&&a[i]<lon)
				{
					lon= a[i];
					l=i;
				} 
			}
			swap(a[d1],a[l]);
			sort(a+d1+1,a+d1+1+(n-d1-1));
			for(int i=0;i<n;i++) cout<< a[i]<< " ";
			cout<< endl;
		}
	}
}
