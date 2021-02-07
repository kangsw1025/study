#include<iostream>
using namespace std;

long long arr[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	
	for(int i=4;i<=1000000;i++) {
		arr[i] = (arr[i-1] + arr[i-2] + arr[i-3]) % 1000000009;
	}
	
	for(int i=0;i<n;i++) {
		int num;
		cin>>num;
		cout<<arr[num]<<"\n";
	}
	return 0;
}
