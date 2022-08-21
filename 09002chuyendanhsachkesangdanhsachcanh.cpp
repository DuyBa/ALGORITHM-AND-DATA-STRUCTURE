#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1;
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s; getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss>> tmp)
		{
			if(tmp[1]!=':')
			{
				int x=0;
				stringstream s1(tmp); s1>> x;
				if(x>i)
				{
					cout<< i<< " ";
			    	cout<< x<< endl;
				}
			} 
		}
		i++;
	}
}
