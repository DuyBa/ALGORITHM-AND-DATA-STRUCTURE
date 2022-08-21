#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[1005];

void dfs(int u)
{
	vs[u]=1;
	cout<< u<< " ";
	for(int v : List[u])
	{
		if(vs[v]==0) dfs(v);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		memset(vs,0, sizeof(vs));
		int n, m, q; 
		cin>> n>> m>> q;
		for(int i=0;i<1005;i++) List[i].clear();		
		for(int i=0;i<m;i++)
		{
			int a, b;
			cin>> a>> b; 
			List[a].push_back(b);
		}
		dfs(q);
		cout<< endl;
	}
}
