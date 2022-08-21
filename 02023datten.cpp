#include<bits/stdc++.h>
using namespace std;
vector <string> s;
int n, m, a[100000]={}, c[10000]={};
void out()
{
	sort(s.begin(),s.end());
	for(int i=1;i<=m;i++) cout<< s[c[i]-1]<< " ";
	cout<< endl;
}
void bk(int i)
{
	for(int j=c[i-1]+1;j<=s.size()-m+i;j++)
	{
		c[i]=j;
		if(i==m) out();
		else bk(i+1);
	}
}
int main()
{
	cin>> n>> m;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		string tmp; cin>> tmp; 
		int ck=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==tmp)
			{
				ck=1;
				break;
			}
		}
		if(ck==0) s.push_back(tmp);
	}
	bk(1);	
}
