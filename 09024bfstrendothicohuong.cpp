#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[1005];

void bfs(int u)
{
	queue <int> q;
	q.push(u);	
	vs[u]=1;
	cout<< u<< " ";
	while(!q.empty())
	{
		int x= q.front(); q.pop();
		for(int v : List[x])
		{
			if(vs[v]==0)
			{
				q.push(v);
				vs[v]=1;
				cout<< v<< " ";
			}
		}
	}
	cout<< endl;
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
		bfs(q);
		cout<< endl;
	}
}
