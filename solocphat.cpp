#include<bits/stdc++.h>
using namespace std;
string a, s="68";
int n;

void out()
{
	cout<< a<< " ";
}
void bk(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=s[j];
		if(i==n-1)
		out();
		else bk(i+1);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		cin>> n;cout<< pow(2,n)<< endl;
		a.resize(n);
		bk(0);
		
		cout<< endl;
	}
}
