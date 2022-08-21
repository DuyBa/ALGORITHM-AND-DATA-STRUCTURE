#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[10005];

void dfs(int u)
{
	vs[u]=1; 
	for(int v : List[u])
	{
		if(vs[v]==0)
		{
			dfs(v);
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
		List[b].push_back(a);
	}
	
	//tim so thanh phan lien thong
	int k=0;
	for(int i=1;i<=n;i++)
	{
		if(vs[i]==0)
		{
			k++;
			dfs(i);
		}
	}
	cout<< k<< endl;
	}

}
