#include<bits/stdc++.h>
using namespace std;
int a[1001][1001], n, m;
int dx[]= {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[]= {-1, 0, 1, -1, 1, -1, 0, 1};
bool check (int x, int y)
{
	return (x and y and x<=n and y<=m and a[x][y]);
}

void dfs(int x, int y)
{
	if(check(x,y))
	{
		a[x][y]= 0;
		for(int i=0;i<8;i++) dfs(x+dx[i], y+dy[i]);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		memset(a,0,sizeof(a));
		cin>> n>> m;
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>> a[i][j];
		int dem=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(a[i][j])
				{
					dem++;
					dfs(i,j);
				}
			}
		}
		cout<< dem<< endl;
	}
}
