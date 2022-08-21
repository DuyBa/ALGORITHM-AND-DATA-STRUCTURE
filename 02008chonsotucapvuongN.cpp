#include<bits/stdc++.h>
using namespace std;
int a[15][15]={}, c[1000], ck[1000], n, m, dem=0;
vector<int> aa[1000];
void out()
{	
	for(int i=0;i<=n-1;i++) aa[dem].push_back(c[i]);
	dem++;
}
void bk(int i, int tong)
{
	for(int j=0;j<n;j++)
	{
		if(ck[j]==0)
		{
			c[i]=j+1;
			ck[j]=1; 
			tong-=a[i][j];
	    	if(i==n-1&&tong==0) out();
	    	else if(i<n-1&&tong>0) bk(i+1,tong);
	    	tong+=a[i][j];
	    	ck[j]=0;
		}
	}
}
int main()
{
	a[15][15]={0}; c[1000]={0}; ck[1000]={0};
	cin>> n>> m;
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>> a[i][j];
	for(int i=0;i<n;i++) 
	{
		c[0]=i+1; ck[i]=1;
		bk(1,m-a[0][i]);
		ck[i]=0;
	}
	cout<< dem<< endl;
	for(int i=0;i<dem;i++)
	{
		for(int j=0;j<aa[i].size();j++)
		{
			cout<< aa[i][j]<< " ";
		}
		cout<< endl;
	}
}
