#include<iostream>
using namespace std;

class student{
	private:
		int id,roll,year,age,contact;
		string name,add;
		static string institute_name;
	public:
		setData(){
			cout << "Enter stu id ";
			cin >> this->id;
			cout << "Enter stu name ";
			cin>> this->name ;
			cout << "Enter stu roll no. ";
			cin>> this->roll ;
			cout << "Enter college year ";
			cin>> this->year ;
			cout << "Enter stu age ";
			cin>> this->age ;
			cout << "Enter stu contact ";
			cin>> this->contact ;
			cout << "Enter college address ";
			cin>> this->add ;
		}
		getData(){
			cout << "id is :-"<< this->id <<endl;
			cout << "name is :-"<< this->name <<endl;
			cout << "roll no. is :-"<< this->roll <<endl;
			cout << "college year is :-"<< this->year<<endl;
			cout << "age is :-"<< this->age <<endl;
			cout << "contact no. is :-"<< this->contact <<endl;
			cout << "address is :-"<< this->add <<endl;	
		}
		static getstaticData(){
			cout << "college name is :" << institute_name << endl;
		}
};

string student::institute_name = "Parul";

int main(){
	
	int n;
	
	cout << "How many student data you enter :- ";
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
