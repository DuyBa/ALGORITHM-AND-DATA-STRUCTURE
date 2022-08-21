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
		else 
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
		cin>> m;
		for(int i=0;i<m-1;i++)
		{
			int a, b; cin>> a>> b;
			List[a].push_back(b);
		}
		for(int i=0;i<=m;i++)
		{
			ck=0;
			if(!vs[i]) dfs(i);
			if(ck)
			{
				cout<< "NO"<< endl;
				break;
			}
		}
		if(!ck) cout<< "YES"<< endl;
	}
}
