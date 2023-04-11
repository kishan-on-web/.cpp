#include<iostream>
using namespace std;

class Student {
	private:
		int id, stan;
		string name;
	public: 
		Student(int id,string name,int stan){
			this->id=id;
			this->name=name;
			this->stan=stan;
		}
		Student(){
			cout<<"enter id : ";
			cin>>this->id;
			cout<<"enter name : ";
			cin>>this->name;
			cout<<"enter standard : ";
			cin>>this->stan;
		}
		getData(){
			cout<<"id : " <<this->id <<endl;
			cout<<"name : " <<this->name <<endl;
			cout<<"standard : " <<this->stan <<endl; 
		}
};

int main(){
	
	Student s1(1,"yash",12),s2,s3;
	
	s1.getData();
	s2.getData();
	s3.getData();
	
	return 0;
}
