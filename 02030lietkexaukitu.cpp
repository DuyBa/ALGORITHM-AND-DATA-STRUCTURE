#include<bits/stdc++.h>
using namespace std;
int  k;
char a[15], c;
void out()
{
	for(int i=1;i<=k;i++) cout<< a[i];
	cout<< endl;
}
void bk(int i)
{
	for(int j=a[i-1];j<=c;j++)
	{
		a[i]=j;
		if(i==k) out();
		else bk(i+1);
	}
}
int main()
{
	memset(a,'A',sizeof(a));
	cin>> c>> k;
	bk(1);
}
