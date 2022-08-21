#include<iostream>
using namespace std;
string a, s="68";
int n;
int ck()
{
	if(n<6) return 0;
	if(a[0]!='8'||a[n-1]!='6') return 0;
	for(int i=0;i<n-1;i++) if(a[i]=='8'&&a[i+1]=='8') return 0;
	for(int i=0;i<n-3;i++) if(a[i]=='6'&&a[i+1]=='6'&&a[i+2]=='6'&&a[i+3]=='6') return 0;
	return 1;
}
void out()
{
	if(ck())  
	{
	    cout<< a;
		cout<< endl;
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
	cin>> n;
	a.resize(n);
	bk(0);
}
