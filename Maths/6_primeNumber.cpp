#include<iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	bool val = true;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) {
			cout<<"false";
			val = false;
		}
	}
	if (val) 
		cout<<"true";
}