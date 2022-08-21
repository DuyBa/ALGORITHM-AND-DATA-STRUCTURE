#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[10005];

void bfs(int u)
{
	queue <int> q;
	vs[u]=1;
	q.push(u);
	while(!q.empty())
	{
		int x= 	q.front(); q.pop();
		for(int j=0;j<List[x].size();j++)
		{
			if(vs[List[x][j]]==0)
			{
				q.push(List[x][j]);
				vs[List[x][j]]=1;
			}
		}
	}
}
void bfs1(int u, int a, int b)
{
	queue <int> q;
	vs[u]=1;
	q.push(u);
	while(!q.empty())
	{
		int x= 	q.front(); q.pop();
		for(int j=0;j<List[x].size();j++)
		{
			if((x==a&&List[x][j]==b)||(x==b&&List[x][j]==a)) continue;
			if(vs[List[x][j]]==0)
			{
				q.push(List[x][j]);
				vs[List[x][j]]=1;
			}
		}
	}
}
int main()
{
	memset(vs, 0, sizeof(vs));
	int n, m; cin>> n>> m;
	for(int i=0;i<m;i++)
	{
		int a, b; cin>> a>> b;
		List[a].push_back(b);
		List[b].push_back(a);
	}
	
	//tim so thanh phan lien thong
	int k=0;
	for(int i=1;i<=n;i++)
	{
		if(vs[i]==0)
		{
			k++;
			bfs(i);
		}
	}
	
	//tim so canh cau
	int cc=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j< List[i].size();j++)
		{
			memset(vs,0,sizeof(vs));
			if(i<List[i][j])
			{
				int l=0; 
				for(int h=1;h<=n;h++)
				{
					if(vs[h]==0)
					{
						l++;
						bfs1(h,i,List[i][j]);
					}
				}
				if(l>k) cc++;
			}
		}
	}
	
	//tim so dinh tru
	int dt= 0;
	for(int i=1;i<=n;i++)
	{
		memset(vs, 0, sizeof(vs));
		vs[i]=1;
		int l=0;
		for(int j=1;j<=n;j++)
		{
			if(vs[j]==0)
			{
				l++;
				bfs(j);
			}
		}
		if(l>k) dt++;
	}
	cout<< dt<< " "<< cc;
}
