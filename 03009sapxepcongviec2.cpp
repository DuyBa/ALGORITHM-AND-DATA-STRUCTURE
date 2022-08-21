#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n;
		int vs[100000]={0};
		vector < pair < int, int> > a(100000);
		for(int i=1;i<=n;i++)
		{
			int c;
			cin>> c>> a[i].second>> a[i].first;
		}
		sort(a.begin()+1, a.end(), greater <pair <int, int>>());
		int ans=0, d=0;
		for(int i=1;i<=n;i++)
		{
			for(int j= min(n, a[i].second);j>=1;j--)
			{
				if(vs[j]==0)
				{
					ans= ans+ a[i].first;
					d++;
					vs[j]=1;
					break;
				}
			}
		}
		cout<< d<< " "<< ans<< endl;
	}
}
