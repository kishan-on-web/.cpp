#include<iostream>
using namespace std;

class student{
	private:
		string state;
		static string country;
	public:
		setData(){
			cout << "Enter state ";
			cin >> this->state;
		}
		getData(){
			cout << "state is :-"<< this->state <<endl;
		}
		static getstaticData(){
			cout << "country name :" << country << endl;
		}
};

string student::country = "Inida";

int main(){
	
	int n;
	
	cout << "How many stats you enter :- ";
	cin >> n;
	
	student h[n];
	int i;
	for(i=0; i<n; i++){
		h[i].setData();
	}
	
	cout <<"\n";

	for(i=0;i<n;i++){
		h[i].getData();
		h[i].getstaticData();
	}
	
	return 0;
}
