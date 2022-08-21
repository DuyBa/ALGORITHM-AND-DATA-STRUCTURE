#include<bits/stdc++.h>
using namespace std;
int a[10000], chay, dem,n, kkk;
int ck()
{
	int dem1=0;
	if(a[1]==0) return 0;
	for(int i=1;i<=chay;i++) if(a[i]==2) dem1++;
	if(dem1>(chay/2)) return 1;
	return 0;
}
void out()
{
	if(ck()&&kkk==0)
	{
		dem++;
		for(int i=1;i<=chay;i++) cout<< a[i];
		cout<< " ";
		if(dem==n) kkk=1;
	}
}
void bk(int i)
{
	for(int j=0;j<=2;j++)
	{
		a[i]=j;
		if(i==chay) out();
		else bk(i+1);
	}
}
int main()
{
	int t; cin>> t; while(t--)
	{
		dem=0;kkk=0;
		cin>> n;
		chay=1;
		while(1)
		{
		    bk(1);
		    if(kkk==1) break;
		    else chay++; 
		}	
		cout<< endl;
	}
}
