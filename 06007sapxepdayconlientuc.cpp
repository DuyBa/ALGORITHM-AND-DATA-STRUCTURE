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
		int a[10000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		int dau=n-1, cuoi=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					swap(a[j],a[i]);
					if(j>cuoi) cuoi =j;
					if(i<dau) dau=i;
				}
			}
		}
		cout<< dau+1<< " "<< cuoi+1<< endl;
	}
}
