#include<iostream>
using namespace std;

class coustomer{
     private:
		int id,age,mobile,valid_year;
		string name,brand,city;	
	public:
		setData(){
		    cout << "Enter coustomer id:- "; 
			cin >> id;
			cout << "Enter coustomer Name:- ";
			cin >> name;
			cout << "Enter coustomer age:- ";
			cin >>age;
			cout << "Enter coustomer  telecome brand:- ";
			cin >> brand;
			cout << "Enter coustomer mobile number:- ";
			cin >> mobile;
			cout << "Enter coustomer city:- ";
			cin >> city;
			cout << "Enter coustomer simcard validity:- ";
			cin >>valid_year;
			}
		getData(){
			cout << "coustomer id :- "<<id<<endl;
			cout << " coustomer name :- "<< name <<endl;
			cout << " coustomer age :- "<< age <<endl;
			cout << " coustomer telecom brand :- "<< brand <<endl;
			cout << " coustomer mobile number :- "<< mobile <<endl;
			cout << "coustomer city :- "<< city <<endl;
			cout << "coustome sim validity :- "<< valid_year <<endl;
		}
};
int main(){
	coustomer c[5];
	int i;
	
	for(i=1;i<=5;i++){
		c[i].setData();
	}
	for(i=1;i<=5;i++){
		c[i].getData();	
	}
}

