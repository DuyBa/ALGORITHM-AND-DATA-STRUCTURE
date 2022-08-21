//Bai 1: 
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{
	float Hx; 
    for(float p=0;p<=1;p=p+0.01) 
    {   
	    if (p==0||p==1) cout<< 0<< endl;
        else 
        { 
	    	Hx= p* (log(p)/log(2))+(1-p)*(log (1-p)/log(2)); 
            cout<<fixed<< setprecision (3)<< -Hx<< endl;
        }
	}
    return 0;
}

