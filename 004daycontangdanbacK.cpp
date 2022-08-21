#include<iostream>
using namespace std;
int a[10000], c[10000], b[10000], n, m, dem;
int ck()
{
	for(int i=1;i<=m-1;i++) if(b[i+1]<b[i]) return 0;
	return 1;
}
void out()
{
	if(ck()) dem++;
}
void bk(int i)
{
	for(int j=a[i-1]+1;j<=n-m+i;j++)
	{
		a[i]=j;
		b[i]=c[a[i]];
		if(i==m) out();
		else bk(i+1);
	}
}
int main()
{
	cin>> n>> m;
	for(int i=1;i<=n;i++) cin>> c[i];
	bk(1);
	cout<< dem;
}
