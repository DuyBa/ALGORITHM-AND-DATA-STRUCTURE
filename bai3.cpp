#include<bits/stdc++.h>
using namespace std;
int vs[10000];
vector <int> List[1000];
void dfs(int u)
{
	vs[u]=1;
	for(int v : List[u])
	{
		if(vs[v]==0) dfs(v);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		int n, m; cin>> n>> m;
		memset(vs, 0, sizeof(vs));
		for(int i=0;i<1000;i++) List[i].clear();
		for(int i=0;i<m;i++) 
		{
			int a, b; cin>> a>> b;
			List[a].push_back(b);
		}
		for(int i=1;i<=n;i++)
		{
			if(vs[i]==0) dfs(i);
			int dem=0;
			for(int i=1;i<=n;i++) if(vs[i]==1) dem++;
			if(dem==n&& List[n][0]==1)
			{
				cout<< "YES"<< endl;
				break;
			}	
		
		}
	}
}
