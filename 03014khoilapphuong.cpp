#include<bits/stdc++.h>
using namespace std;
bool ck(string a, string b) {
	int i = 0, j = 0;
	while (i < a.length() && j < b.length()) {
		if (a[i] == b[j]) {
			i++; j++;
		}
		else i++;
	}
	return j == b.length();
}
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		string s; cin>> s;
		long long ans =0;
		bool ok = false;
		for(int i=1;i<=100;i++)
		{
			long long x= i*i*i;
			if(ck( s, to_string(x)))
			{
				ok= true;
				ans= x;
			}
		}
		if(!ok) cout<< -1;
		else cout<< ans;
		cout<< endl;
	}
}
