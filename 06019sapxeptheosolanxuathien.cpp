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
		int a[10000]={}, b[100000]={};
		for(int i=0;i<n;i++)
		{
			cin>> a[i];
			b[a[i]]++;
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(b[a[j]]>b[a[i]]) swap(a[i], a[j]);
				else if(b[a[j]]==b[a[i]]) if(a[j]<a[i]) swap(a[i],a[j]);
			}
		}
		for(int i=0;i<n;i++) cout<< a[i]<< " ";
		cout<< endl;
	}
}
