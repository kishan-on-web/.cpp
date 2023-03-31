#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "size of array : ";
	cin >> n;
	
	int a[n],i;
	for(i=0; i<n; i++){
		cout << "enter the value of array : ";
		cin >> a[i];
	}
	
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			cout << a[i] << endl;
		}
	}
	return 0;
}
