#include<iostream>
using namespace std;
int  a[10000]={}, c[10000]={};
void out(int n)
{   
    cout<< "[";
	for(int i=0;i<n-1;i++)
	{
		cout<< c[i]<< " ";
		a[i]=c[i];
	}
	cout<< c[n-1]<< "]";
	a[n-1]=c[n-1];
	cout<< endl;
}
void bk(int n)
{
	if(n==0) return;
	for(int i=0;i<n;i++) c[i]=a[i]+a[i+1];
	out(n);
	bk(n-1);
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		for(int i=0;i<n;i++)
		{
			cin>> c[i];
			a[i]=c[i];
		}
        cout<< "[";
    	for(int i=0;i<n-1;i++) cout<< c[i]<< " ";
    	cout<< c[n-1]<< "]";
		cout<< endl;
		bk(n-1);
	}
}

