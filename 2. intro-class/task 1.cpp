#include<iostream>
using namespace std;

class employees {
	public:
		int id,age,salary,experience;
		char name[50],role[50],city[50],company_name[50];
};

int main() 
{
	employees s[5];
	int i;
	
	for(i=0; i<=4; i++){
		cout<<"Enter id : ";
		cin>>s[i].id;
		cout<<"Enter name : ";
		cin>>s[i].name;
		cout<<"Enter role : ";
		cin>>s[i].role;
		cout<<"Enter age : ";
		cin>>s[i].age;
		cout<<"Enter salary : ";
		cin>>s[i].salary;
		cout<<"Enter experience : ";
		cin>>s[i].experience;
		cout<<"Enter city : ";
		cin>>s[i].city;
		cout<<"Enter company name : ";
		cin>>s[i].company_name;
	}
	
	cout <<"\n";
	
	for(i=0; i<=4; i++){
		cout<<"id : "<<s[i].id<<endl;
		cout<<"name : "<<s[i].name<<endl;
		cout<<"role : "<<s[i].role<<endl;
		cout<<"age : "<<s[i].age<<endl;
		cout<<"salary : "<<s[i].salary<<endl;
		cout<<"experience : "<<s[i].experience<<endl;
		cout<<"city : "<<s[i].city<<endl;
		cout<<"company name : "<<s[i].company_name;
	}
	
	return 0;
}
