#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[10000];
void dfs(int u)
{
	vs[u]=1;
	for(int i=0;i< List[u].size();i++)
	{
		if(vs[List[u][i]]==0) dfs(List[u][i]);
	}
}
int main()
{
	memset(vs,0, sizeof(vs));
	int n, m, x; 
	cin>> n>> m>> x;
	for(int i=0;i<m;i++)
	{
		int a, b; cin>> a>> b;
		List[a].push_back(b);
		List[b].push_back(a);
	}
	dfs(x);
	int ck=0;
	for(int i=1;i<=n;i++)
	{
		if(vs[i]==0)
		{
			cout<< i<< endl;
			ck=1;
		} 
	}
	if(ck==0) cout<< 0;
}
