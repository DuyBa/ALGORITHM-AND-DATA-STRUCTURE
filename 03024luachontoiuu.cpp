#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int, int> a, pair <int, int> b)
{
	return a.second< b.second;
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		vector < pair <int, int> > a(n);
		int ans=1, k=0;
		for(int i=0;i<n;i++)
			cin>> a[i].first>> a[i].second;
		sort(a.begin(), a.end(), cmp);
		int j=0;
		for(int i=1; i<n;i++)
		{
			if(a[i].first >= a[j].second)
			{
				j=i;
				ans++;
			}
		}
		cout<< ans<< endl;
	}
}
