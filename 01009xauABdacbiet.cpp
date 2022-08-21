#include<iostream>
using namespace std;
string s="AB", a;
int n, m; 
int dem=0;
int ck1()
{
	int dem1=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='A')
		{
			int dc=i+1;
	    	while(a[dc]==a[i])
	    	{
	    		dem1++; dc++;
			}
		}
		if(dem1<m) dem1=1;
		else if(dem1>m) return 0;
		else return 1;
	}
	return 0;
}
void out1()
{
	if(ck1()) cout<< a<< endl;
}
void bk2(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=s[j];
		if(i==n-1) out1();
		else bk2(i+1);
	}
}
void out()
{

	if(ck1()) dem++;
	
}


void ql(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=s[j];
		if(i==n-1) out();
		else ql(i+1);
	}
}
int main()
{
	cin>> n>> m;
	a.resize(n);
	ql(0);
	cout<< dem<< endl;
	bk2(0);
}
