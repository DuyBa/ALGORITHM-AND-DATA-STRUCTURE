#include<iostream>
using namespace std;
string a;
int ck[10000]={}, n;
string s;
int ck1()
{
	for(int i=1;i<n-1;i++)
	{
		if( a[i]=='A' && a[i-1]!='E'&&a[i+1]!='E') return 0;
		if( a[i]=='E' && a[i-1]!='A'&&a[i+1]!='A') return 0;
	}
	return 1;
}
void out()
{
	if(ck1())
	cout<< a<< endl;
}

void in(int i)
{
	for(int j=0;j<n;j++)
	{
		if(ck[j]==0)
		{
			ck[j]=1;
			a[i]=s[j];
			if(i==n-1) out();
	    	else in(i+1);
	    	ck[j]=0;
		}	
	}
}



int main()
{
	char h;
	cin>> h;
	int idx =h;
	int A=65;
	n=idx-65+1;
	a.resize(n);
	for(int i=0;i<n;i++)
	{
		s[i]=A;
		A++;
	}
	in(0);
}
