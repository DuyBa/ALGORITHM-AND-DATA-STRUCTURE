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

int main()
{
	int t; cin>> t; while(t--)
	{
		for(int i=0;i<1004;i++) List[i].clear();
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
    		if(l>k) cout<< i<< " ";
    	}
    	cout<< endl;
	}
}
