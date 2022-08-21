#include<bits/stdc++.h>
using namespace std;
string a, s="OX", s1;
int n;
int ck()
{
	if(n<=5) return 0;
	int kq=0, maxo=-1, maxx=-1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]=='O')
		{
		    int demo=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==a[i]) demo++;
				else break;
			}
			maxo=max(demo,maxo);
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]=='X')
		{
		    int demx=1;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==a[i]) demx++;
				else break;
			}
			maxx=max(demx,maxx);
		}
	}
	
	if(s1=="X") 
	{
		if(maxx>maxo&&maxx>=5) return 1;
	}
	else if(maxo>maxx&&maxo>=5) return 1;
	return 0;
}
void out()
{
	if(ck())
	{
		cout<< a<< endl;
	}	
}
void bk(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=s[j];
		if(i==n-1) out();
		else bk(i+1);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		cin>> n; cin>> s1;
		a.resize(n);
		bk(0);
	}
}
