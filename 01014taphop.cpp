#include<iostream>
using namespace std;
int n, m, s, dem, a[10000];
void out()
{
	int tong=0;
	for(int i=1;i<=m;i++) tong+=a[i];
	if(tong==s) dem++;
}
void bk(int i)
{
	for(int j=a[i-1]+1;j<=n-m+i;j++)
	{
		a[i]=j;
		if(i==m) out();
		else bk(i+1);
	}
}
int main()
{
	while(cin>> n>> m>> s)
	{
		if(n==0&&m==0&&s==0) break;
		else
		{
			dem=0;
			bk(1);
			cout<< dem<< endl;
		}
	}
}
