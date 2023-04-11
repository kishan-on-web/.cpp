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
		getData(){
			cout<<"id : " <<this->id <<endl;
			cout<<"name : " <<this->name <<endl;
			cout<<"standard : " <<this->stan <<endl; 
		}
};

int main(){
	
	Student s1(1,"yash",12),s2(2,"priyal",5),s3(3,"rajan",10);
	
	s1.getData();
	s2.getData();
	s3.getData();
	
	return 0;
}
