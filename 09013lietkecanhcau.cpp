#include<bits/stdc++.h>
using namespace std;
vector <int> List[1005];
int vs[1005];
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
void bfs1(int u, int a, int b)
{
	queue <int> q;
	q.push(u);
	vs[u]=1;
	while(!q.empty())
	{
		int x= q.front(); q.pop();
		for(int v : List[x])
		{
			if((x ==a && v==b)||(x==b&& v==a)) continue;
			if(vs[v]==0  )
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
		memset(vs, 0, sizeof(vs));
		for(int i=0;i<1005;i++) List[i].clear();
		int n, m; cin>> n>> m;
		for(int i=0;i<m;i++)
		{
			int a, b;
			cin>> a>> b; 
			List[a].push_back(b);
			List[b].push_back(a);
		}
		int k=0;
		for(int i=1;i<=n;i++)
		{
			if(vs[i]==0)
			{
				k++;
				bfs(i);
			} 
		}
		// k la so thanh phan lien thong
		
		
		for(int j=1;j<=n;j++)
		{ 
		    
			for(int v : List[j])
			{	memset(vs, 0, sizeof(vs));	
				
				if(j<v)
				{int l=0;
					for(int h=1;h<=n;h++)
		    		{
		    		    if(vs[h]==0)
		         		{
		    		     	l++;
		    		     	bfs1(h,j,v);
		    	    	}
		   	    	
	    			}
	    			if(l>k) cout<< j<< " "<< v<< " ";
				}
				
			}
		}
		cout<< endl;
	}
}
