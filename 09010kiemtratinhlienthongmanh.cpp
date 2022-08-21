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
				vs[List[x][j]]=1;
				q.push(List[x][j]);
			}
		}
	}
}

int main()
{
	int t; cin>> t; while(t--)
	{
			memset(vs, 0, sizeof(vs));
	for(int i=0;i<1004;i++) List[i].clear();
	int n, m; cin>> n>> m;
	for(int i=0;i<m;i++)
	{
		int a, b; cin>> a>> b;
		List[a].push_back(b);
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
	if(k==1) cout<< "YES";
	else cout<< "NO";
	cout<< endl;
	}

}
