#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int main()
{
	int t; cin>> t; while(t--)
	{
		for(int i=0;i<1005;i++) List[i].clear();
		int n, m; cin>> n>> m;
		for(int i=0;i<m;i++)
		{
			int a, b;
			cin>> a>> b; 
			List[a].push_back(b);
		}
		for(int i=1;i<=n;i++)
		{
			cout<< i<< ": ";
			for(int j=0;j< List[i].size();j++) cout<< List[i][j]<< " ";
			cout<< endl;
		}
	}
}
