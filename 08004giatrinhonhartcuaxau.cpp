#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		long long n; cin>> n;
		string s; cin>> s;
		if(n==s.size()) cout<< 0;
		else
		{
			long long a[100]={0};
	    	for(long long i=0;i<s.size();i++) a[s[i]]++;
	    	sort(a+65,a+65+25);
	    	priority_queue <long long> q;
	    	for(int i=90;i>=65;i--) 
	    	{
	    		if(a[i]!=0) q.push(a[i]);
	    	}
	    	while(n--&&q.top()!=0)
	    	{
	    		q.push(q.top()-1);
	    		q.pop();
			}
	    	long long tong=0;
	    	while(!q.empty())
	    	{
	    		tong+= q.top()*q.top();
	    		q.pop();
			}
			cout<< tong<< endl;
		}

		
	}
}
