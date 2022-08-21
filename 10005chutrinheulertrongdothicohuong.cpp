#include<bits/stdc++.h>
using namespace std;
vector <int> vhn[1005], ch[1005];
int vs[1005];
void dfs(int u)
{
	vs[u]=1;
	for(int v : vhn[u])
	{
		if(vs[v]==0) dfs(v);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		for(int i=0;i<1004;i++) 
		{
			vhn[i].clear();
			ch[i].clear();
		}
		memset(vs,0,sizeof(vs));
		int n, m; cin>> n>> m;
		for(int i=0;i<m;i++) 
		{
			int a, b; cin>> a>> b;
			vhn[a].push_back(b);
			vhn[b].push_back(a);
			ch[a].push_back(b);
		}
		dfs(1);
		int dem=0;
		for(int i=1;i<=n;i++) if(vs[i]==1) dem++;
		
		if(dem==n)
		{
			int sl=0;
			for(int i=1;i<=n;i++)
			{
				int br= ch[i].size();
				int bv=0;
				for(int j=1;j<=n;j++)
				{
					if(j==i) continue;
					for(int v : ch[j])
					{
						if(v==i) bv++;
					}
				}
				if(bv==br&&bv!=0&&br!=0) sl++;
			}
			if(sl==n) cout<< 1;
			else cout<< 0;
		}
		else cout<< 0;
		cout<< endl;
	}
}
