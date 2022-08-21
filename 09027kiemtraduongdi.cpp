#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[1005], e[10000];
void bfs(int u)
{
	queue <int> q;
	q.push(u);
	vs[u]=1;
	while(!q.empty())
	{
		int x= q.front(); q.pop();
		for(int v : List[x])
		{
			if(vs[v]==0)
			{
				q.push(v); vs[v]=1;
			}
		}
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		for(int i=0;i<1005;i++) List[i].clear();
		int n, m; cin>> n>> m;
		for(int i=0;i<m;i++)
		{
			int a, b; cin>> a>> b;
			List[a].push_back(b);
			List[b].push_back(a);
		}
		int h; cin>> h;
		while(h--)
		{
			memset(vs,0,sizeof(vs));
			int p,q; cin>> p>> q;
			bfs(p);
			if(vs[p]==0||vs[q]==0) cout<< "NO";
			else cout<< "YES";
	    	cout<< endl;
		}
	}
}
