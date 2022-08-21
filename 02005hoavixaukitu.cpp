#include<iostream>
using namespace std;
string a[10000]={},s; 
int ck[10000]={};
int n;
void out()
{
	for(int i=1;i<=n;i++) cout<< a[i];
	cout<< " ";
}

void in(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(ck[j]==0)
		{
			ck[j]=1;
			a[i]=s[j-1];
			if(i==n) out();
	    	else in(i+1);
	    	ck[j]=0;
		}	
	}
}



int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		cin>> s;
		n=s.length();
		in(1);
		cout<< endl;
	}
}
