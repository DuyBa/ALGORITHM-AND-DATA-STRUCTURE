#include<bits/stdc++.h>
using namespace std;
int n, m;
void out(int a[], vector<int> ck)
{
	int r=m;
	while(a[r]>=n-m+r) r--;
	a[r]++;
	for(int i=r+1;i<=m;i++) a[i]=a[i-1]+1;
	int dem=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		if(a[i]==ck[j]) dem++;
	}
	if(r==0) cout<< m<< endl;
	else cout<< m-dem<< endl;
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int a[100000]={};
		vector<int> ck;
		ck.push_back(0);
		cin>> n>> m;
		for(int i=1;i<=m;i++) 
		{
			cin>> a[i];
			ck.push_back(a[i]);
		}
		out(a, ck);
	}
}
