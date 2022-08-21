#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[10000];
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
		memset(vs,0,sizeof(vs));
		for(int i=0;i<1005;i++) List[i].clear();
		int n, m; cin>> n>> m;
		for(int i=0;i<m;i++)
		{
			int a, b; cin>> a>> b;
			List[a].push_back(b);
			List[b].push_back(a);
		}	
		bfs(1);
		int ck, dlt=0, dbc=0, dbl=0;
		for(int i=1;i<=n;i++)
		{
			if(List[i].size()%2==0) dbc++; else dbl++;
			if(vs[i]==1) dlt++;
		}
		if(dlt!=n) cout<< 0;
		else if(dbc==n) cout<< 2;
		else if(dbl<=2) cout<< 1;
		else cout<< 0;
		cout<< endl;
	}
}
