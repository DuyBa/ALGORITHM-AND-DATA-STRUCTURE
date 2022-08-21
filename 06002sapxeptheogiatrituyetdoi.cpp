#include<bits/stdc++.h>
using namespace std;
long long m;

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long n;
		cin>> n>> m;
		long long a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=1;i<n;i++)
		{
			int d1=abs(a[i]-m);
			int j=i-1;
			if(abs(a[j]-m)>d1)
			{
				int tmp=a[i];
				while(abs(a[j]-m)>d1&&j>=0)
				{
					a[j+1]=a[j];
					j--;
				}
				a[j+1]=tmp;
			}
		}
		for(int i=0;i<n;i++) cout<< a[i]<< " ";
		cout<< endl;
	}
}
