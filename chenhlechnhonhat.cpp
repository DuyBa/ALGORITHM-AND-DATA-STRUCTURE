#include<bits/stdc++.h>
using namespace std;
string s[100];
long long n, m, ck[10000], a[10000], be;
void out()
{
	long long lon=-100;
	long long bee = 1e9+7;
	long long res[n]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			res[i]= res[i]*10+ (s[i][a[j]-1]-'0');
		}
	}
	sort(res,res+n);
	if(res[n-1]-res[0]<be) be=res[n-1]-res[0];
}
void bk(int i)
{
	for(int j=1;j<=m;j++)
	{
		if(ck[j]==0)
		{
			a[i]=j; ck[j]=1;
			if(i==m) out();
			else bk(i+1);
			ck[j]=0;
		}
	}
}
int main()
{
	memset(ck,0,sizeof(ck));
	memset(a,0,sizeof(a));
	be =1e9+7;
	cin>> n>> m;
	for(int i=0;i<n;i++) cin>> s[i];
	bk(1);
	cout<< be;
}
