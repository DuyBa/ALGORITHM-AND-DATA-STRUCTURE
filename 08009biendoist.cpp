#include<bits/stdc++.h>
using namespace std;
void xuli(int s, int t)
{
	int a[20005], i;
	for(i=0;i<=20000;i++) a[i]= INT_MAX;
	a[s]=0;
	queue <int> q; q.push(s);
	while(a[t]== INT_MAX)
	{
		i= q.front(); q.pop();
		if(i-1>0 && a[i-1]== INT_MAX)
		{
			a[i-1]=a[i]+1;
			q.push(i-1);
		}
		if(i*2<20000 && a[i*2]== INT_MAX)
		{
			a[i*2]=a[i]+1;
			q.push(i*2);
		}
	}
	cout<< a[t]<< endl;
}
int main()
{
	int n; cin>> n;
	while(n--)
	{
		int s,  t;
		cin>> s>> t;
		xuli(s, t);
	}
}
