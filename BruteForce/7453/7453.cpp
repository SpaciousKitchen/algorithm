#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >>n;
	vector <long long> a(n);
	vector <long long> b(n);
	vector <long long> c(n);
	vector <long long> d(n);
	
	for (int i=0; i<n;i++) {
		scanf("%ld %ld %ld %ld",&a[i],&b[i],&c[i],&d[i]);
	}
	vector <long long> arr1;
	vector <long long> arr2;
	for (int i=0; i<n;i++) {
		for (int j=0; j<n;j++) {
			arr1.push_back(a[i]+b[j]);
			arr2.push_back(c[i]+d[j]);
		}
	}


	sort(arr2.begin(),arr2.end());
	
	int ans=0;
	
	for (int i=0; i<arr1.size();i++) {
		long long num=arr1[i];
		int cnt=upper_bound(arr2.begin(), arr2.end(),-num)-lower_bound(arr2.begin(), arr2.end(),-num);
		if(cnt>0){
		    ans+=cnt;
		}
	
	}
	cout <<ans<<'\n';
	return 0;
}