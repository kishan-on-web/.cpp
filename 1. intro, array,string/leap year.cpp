#include<iostream>
using namespace std;

int main()
{
	int i,l=0;
	int arr[500];
	
	for(i=2020; i<=3030; i=i+4){
		arr[l]=i;
		l++;
	}
	
	for(i=0;i<l;i++){
		cout<<arr[i]<<"  ";
	}
	
}
