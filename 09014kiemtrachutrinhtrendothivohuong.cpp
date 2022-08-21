#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[1000];
int n, m, ck;
void dfs(int u, int canh)
{
	if(ck) return;
	vs[u]=1;
	for(int v : List[u])
	{
		if(vs[v]==0) dfs(v,u);
		else if(vs[v]==1 && v!= canh)
		{
			ck=1;
			return;
		}
	}
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
			List[b].push_back(a);
		}
		ck=0;
		for(int i=1;i<=n;i++)
		{
			if(ck) break;
			else if(!vs[i]) dfs(i,1);
		}
		if(ck) cout<< "YES"; 
		else cout<< "NO";
		cout<< endl;
	}
}
