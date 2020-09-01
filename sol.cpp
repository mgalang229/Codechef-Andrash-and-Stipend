#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=1e5;
double a[mxN], n;

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		bool ok=1;
		for(int i=0; i<n; ++i) {
			cin >> a[i];
			if(a[i]==2)
				ok=0;
		}
		double mx=0;
		for(int i=0; i<n; ++i)
			if(a[i]>mx)
				mx=a[i];
		if(!ok||mx!=5.0) {
			cout << "No\n";
			continue;
		}
		double sum=0;
		for(int i=0; i<n; ++i)
			sum+=a[i];
		if(sum/n>=4.0)
			cout << "Yes";
		else
			cout << "No";
		cout << "\n";
	}
}
