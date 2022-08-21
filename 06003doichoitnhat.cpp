#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		long long a[100000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		long long dem=0;
		for(int i=0;i<n-1;i++)
		{
			int dc=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[dc]) dc=j;
			}
			if(dc!=i&&a[dc]!=a[i]) 
			{
				swap(a[i],a[dc]);
				dem++;
			}
		}
		cout<< dem<< endl;
	}
}
