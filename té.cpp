#include<bits/stdc++.h>
 
using namespace std;

int n;
int a[1000];
int i,k,r,s,m;
void nhap() {
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
}
 
void in () {
    for (int i=1; i<=n; i++) {
        cout << a[i] << " ";
    }
}
int kt = 0;
void sinhth () {
    i = n;
    while (a[i] > a[i + 1]) i--;
    k = n;
    if (i > 0){
    	while (a[i] > a[k]) k--;
    	m = a[i]; a[i] = a[k]; a[k] = m;
    	r = i + 1; s = n; 
    	while(r < s){
        	m = a[r]; a[r] = a[s]; a[s] = m;
        	r++; s--;
    	}
	}else kt = 1;
}
 
int main () {
    int t;
    cin >> t;
    while(t--){
    	cin >> n;
    	int a[n];
    	nhap();
    	sinhth();
    	if(kt == 0){
    		in();
    		cout << endl;
    	}
    	else {
    		for (int i = 1; i <= n; i++){
    			a[i] = i;
			}
			for (int i = 1; i <= n; i++){
    			cout << a[i] << " ";
			}
			cout << endl;
		}
	}
}
