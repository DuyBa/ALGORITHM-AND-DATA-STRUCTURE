#include<iostream>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n, m, a[100000]={}, l[100000]={};
		cin>>n >> m;
		for(int i=0;i<n;i++) cin>> a[i];
		l[0]=1; l[m]=0;
		for(int i=0;i<n;i++)
		{
			for(int t=m;t>=a[i];t--)
			{
				if(l[t]==0&&l[t-a[i]]==1) l[t]=1;
			}
		}
		if(l[m]==1) cout<< "YES";
		else cout<< "NO";
		cout<< endl;
	}
}
