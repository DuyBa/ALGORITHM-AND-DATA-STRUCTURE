#include<bits/stdc++.h>
using namespace std;
long long tk(string s, long long l, long long r)
{
	long long k=l, m;
	while(l<=r)
	{
		m=(l+r)/2;
		if(s[m]>s[k-1]&&s[m+1]<=s[k-1]) return m;
		else if(s[m]>s[k-1]&&s[m+1]>s[k-1]) l=m+1;
		else if(s[m]<s[k-1]) r=m-1;
		else l=m+1;
	}
	return m;
}
int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		string s1, tmp, s, l;
		cin>> l>> s;
		long long k=s.length()-1;
		long long n=k;
		cout<< l<< " ";
		while(s[k-1]>=s[k]&&k>0) k--;
		if(k==0) cout<< "BIGGEST"<< endl;
		else
		{
			long long dc= tk(s,k,n);
			swap(s[k-1],s[dc]);
			for(long long i=0;i<k;i++) cout<< s[i];
			for(long long i=n;i>=k;i--) cout<< s[i];
			cout<< endl;
		}	
	}
}
