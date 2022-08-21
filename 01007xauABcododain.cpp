#include<bits/stdc++.h>
using namespace std;
string s, a="AB";
int n;
void in()
{
	for(int i=1;i<=n;i++) cout<< s[i];
	cout<< " ";
}

void out(int i)
{
	for(int j=0;j<=1;j++)
	{
		
		s[i]=a[j];
		if(i==n) in();
		else out(i+1);
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
		out(1);
		cout<< endl;
	}
}
