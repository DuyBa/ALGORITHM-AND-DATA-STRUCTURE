#include<bits/stdc++.h>
using namespace std;
long long n, m;
long long M= 1e9 +7;
struct matran{
	long long f[100][100];
};
matran operator* (matran a, matran b)
{
	matran c;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c.f[i][j]=0;
			for(int k=0;k<n;k++)
			c.f[i][j]= (c.f[i][j] + a.f[i][k]* b.f[k][j] %M)%M; 
		}
	}
	return c;
}
matran powmod(matran a, long long n)
{
	if(n==1) return a;
	matran x= powmod(a, n/2);
	if(n%2==0) return x*x;
	return a*x*x;
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		cin>> n>> m;
		matran a;
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>> a.f[i][j];
		matran kq= powmod(a,m);
		long long tong=0;
		int chay= n-1;
		for(int i=0;i<n;i++) 
		{
			tong = (tong + kq.f[n-1][i])%M;
			chay--;
		}
		cout<< tong<< endl;
	}
}
