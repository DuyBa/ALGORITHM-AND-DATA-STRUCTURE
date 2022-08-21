#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
    	cin>> n;
    	int a[10000]={}, b[100][100]={}, c=1;
    	for(int i=0;i<n;i++) cin>> a[i];
    	for(int i=0;i<n;i++)
    	{
	    	int ck=0;
	    	for(int j=0;j<n-i-1;j++)
	    	{
			    if(a[j]>a[j+1])
		    	{
		    		ck=1;
	    			swap(a[j],a[j+1]);
	    		}
	    	}
	    	if(ck==0) break;
	    	else 
	    	{
                for(int l=0;l<n;l++) b[c][l]=a[l];
        		c++;
    		}
    	}
    	for(int i=c-1;i>=1;i--)
    	{
		    cout<< "Buoc "<< i<< ": ";
	    	for(int j=0;j<n;j++) cout<< b[i][j]<< " ";
    		cout<< endl;
    	}
	}
}
