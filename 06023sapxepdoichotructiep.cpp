#include<iostream>
using namespace std;
int main()
{
	
		int n,b=1;
		cin>> n;
		int a[10000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
    			if(a[j]<a[i]) swap(a[i],a[j]);
			cout<< "Buoc "<< b<< ": ";
			for(int i=0;i<n;i++) cout<< a[i]<< " ";
			b++;
			cout<< endl;
		}
	
}
