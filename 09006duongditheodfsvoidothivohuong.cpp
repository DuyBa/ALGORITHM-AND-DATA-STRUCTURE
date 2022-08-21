#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[1005], e[10000];
void dfs(int u)
{
	vs[u]=1; 
	for(int v : List[u])
	{
		if(vs[v]==0)
		{
			e[v]=u;
			dfs(v);
		}
	}
}
void in(int u, int v)
{
	if(vs[v]==0)
	{
		cout<< -1; 
		return ;
	}
	vector <int> a;
	while(u!=v)
	{
		a.push_back(u);
		u = e[u];
	}
	a.push_back(v);
	reverse(a.begin(), a.end());
	for(int i=0;i<a.size();i++) cout<< a[i]<< " ";
}
int main()
{
	int t; cin>> t; while(t--)
	{
		memset(vs,0,sizeof(vs));
		memset(e,0,sizeof(e));
		for(int i=0;i<1005;i++) List[i].clear();
		int n, m, p, q; cin>> n>> m>> p>> q;
		
		
		for(int i=0;i<m;i++)
		{
			int a, b; cin>> a>> b;
			List[a].push_back(b);
			List[b].push_back(b);
		}
		
		dfs(p);

		in(q,p);
		cout<< endl;
	}
}
