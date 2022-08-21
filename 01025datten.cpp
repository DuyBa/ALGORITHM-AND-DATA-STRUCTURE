#include<iostream>
using namespace std;
int n, m, a[10000];
string s,c;


void out()
{
	
	{
		for(int i=1;i<=m;i++) cout<< c[i];
		cout<< endl;
	}
}

void ql(int i)
{
	for(int j=a[i-1]+1;j<=n-m+i;j++)
	{
		a[i]=j;
		c[i]=s[a[i]];
		if(i==m) out();
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
		cin>> n>> m;
		int b= 65;
		for(int i=1;i<=n;i++)
		{
			s[i]=b;
			b++;
    	}
		ql(1);
	}
}
