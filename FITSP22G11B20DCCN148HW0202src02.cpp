
//BAI 2:
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float Hx;
	float p,q,p0;
	cin>> p0;
	float res=1.0-p0;
	if(p0==0) cout<< 0<< endl;
	else
	{
		for(float p=0;p<=res;p=p+0.01)
    	{
    		if(p==0||p==res) cout<< -(res*(log(res)/log(2))+p0*(log(p0)/log(2)))<< endl;
    		else 
    		{
    			Hx= p*(log(p)/log(2))+(res-p)*(log(res-p)/log(2))+p0*(log(p0)/log(2));
    			cout<< -Hx<< endl;
    		}
    	}
	}
}
