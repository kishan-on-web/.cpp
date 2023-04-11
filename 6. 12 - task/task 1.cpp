#include<iostream>
using namespace std;

class Employe {
	private :
		int id,salary,experience,contact;
		string name,role,add,email;
	public :
		setData(){
			cout << "Enter id:- "; 
			cin >> id;
			cout << "Enter Name:- ";
			cin >> name;
			cout << "Enter role:- ";
			cin >>role;
			cout << "Enter salary:- ";
			cin >> salary;
			cout << "Enter experience:- ";
			cin >> experience;
			cout << "Enter address:- ";
			cin >> add;
			cout << "Enter simcard email:- ";
			cin >>email;
			cout << "Enter simcard contact:- ";
			cin >>contact;
		}
		getData(){
			cout << "id :- "<<id<<endl;
			cout << "name :- "<< name <<endl;
			cout << "role :- "<< role <<endl;
			cout << "salary :- "<< salary <<endl;
			cout << "experience :- "<< experience <<endl;
			cout << "address :- "<< add <<endl;
			cout << "email :- "<< email <<endl;
			cout << "contact :- "<< contact <<endl;
		}
};

int main(){
	Employe e[5];
	int i;
	
	for(i=1; i<=5; i++){
		e[i].setData();
	}
	
	for(i=1; i<=5; i++){
		e[i].getData();
	}
}

