#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[1000];
int n, m, ck;
void dfs(int u)
{
	if(ck) return;
	vs[u]=1;
	for(int v : List[u])
	{
		if(vs[v]==0) dfs(v);
		else if(vs[v]==1)
		{
			ck=1;
			return;
		}
	}
	vs[u]=2;
}
int main()
{
	int t; cin>> t; while(t--)
	{
		memset(vs,0,sizeof(vs));
		for(int i=0;i<1004;i++) List[i].clear();
		cin>> n>> m;
		for(int i=0;i<m;i++)
		{
			int a, b; cin>> a>> b;
			List[a].push_back(b);
		}
		ck=0;
		for(int i=1;i<=n;i++)
		{
			if(ck) break;
			else if(!vs[i]) dfs(i);
		}
		if(ck) cout<< "YES"; 
		else cout<< "NO";
		cout<< endl;
	}
}
