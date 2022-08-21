#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, s; cin>> n>> s;
	int a= s, b= s;
	int M[1000]={0}, N[1000]={0};
	M[0]= 1;
	s--;
	for(int i=n-1;i>=0;i--)
	{
		if(s>=9)
		{
			M[i]= 9;
			s= s- 9;
		}
		else
		{
			if( i==0) M[i]= s+ 1;
			else M[i]= s; 
			s=0;
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a>= 9)
		{
			N[i]= 9;
			a= a-9;
		}
		else
		{
			N[i]= a; a=0;
			break;
		}
	}
	if( b==0 ||  b >  9*n) cout<< "-1 -1"<< endl;
	else
	{
		for(int i=0;i<n;i++) cout<< M[i];
		cout<< " ";
		for(int i=0;i<n;i++) cout<< N[i];
		cout<< endl;
	}
}
