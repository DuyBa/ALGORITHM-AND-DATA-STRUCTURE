#include<iostream>
using namespace std;
string s="AH", a;
int n; 
int ck1()
{
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]=='H'&&a[i+1]=='H') return 0;
	}
	return 1;
}
int ck2()
{
	if(a[1]!='H'||a[n]!='A') return 0;
	return 1;
}
void out()
{
	if(ck1()&&ck2())
	{
		for(int i=1;i<=n;i++) cout<< a[i];
		cout<< endl;
	}
}

void ql(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=s[j];
		if(i==n) out();
		else ql(i+1);
	}
}
int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		cin>> n;
		ql(1);
	}
}
