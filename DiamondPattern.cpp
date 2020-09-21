#include<iostream>
using namespace std;

int main() {
	int n, n1, n2;
	cin>>n;
	n1=(n+1)/2;
	n2=n/2;
	for(int i=1;i<=n1;i++) {
		for(int sp=1;sp<=n1-i;sp++) {
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++) {
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n2;i>=1;i--) {
		for(int sp=1;sp<=n2-i+1;sp++) {
			cout<<" ";
		}
		for(int j=2*i-1;j>=1;j--) {
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
