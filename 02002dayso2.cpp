#include<iostream>
using namespace std;
void bk(int a[], int n)
{
	if(n==0) return;
	int c[10000]={};
	for(int i=0;i<n;i++) c[i]=a[i]+a[i+1];
	bk(c, n-1);
	cout<< "[";
	for(int i=0;i<n-1;i++) cout<< a[i]<< " ";
	cout<< a[n-1]<< "]"<< " ";
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		int  a[10000]={};
		cin>> n;
		for(int i=0;i<n;i++) cin>> a[i];
		bk(a, n);
		cout<< endl;
	}
}
