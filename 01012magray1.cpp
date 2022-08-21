#include<bits/stdc++.h>
using namespace std;
int n, dem;
string s[1000],tmp[1000];
void sinh()
{
	for(int i=0;i<dem;i++) tmp[i]=s[dem-1-i];
	for(int i=0;i<dem;i++) 
	{
		s[i]="0"+s[i];
		tmp[i]="1"+tmp[i];
	}
	int j=0;
	for(int i=dem;i<dem*2;i++) 
	{
		s[i]=tmp[j];
		tmp[j].resize(0);
		j++;
	}
	dem*=2;
}
int main()
{
	int t; cin>> t; while(t--)
	{
		dem=2;
		s[0]="0",s[1]="1";
		cin>> n;
		if(n==1) cout<< s[0]<< " "<< s[1]<< endl;
		else
		{
			for(int i=2;i<=n;i++)
	    	{
	    		sinh();
	    	}
	    	for(int i=0;i<dem;i++){
	    		cout<< s[i]<< " ";
	    		s[i].resize(0);
			}
	    	cout<< endl;
	    }
	}
}
