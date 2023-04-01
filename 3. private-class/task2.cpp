#include<iostream>
using namespace std;


 class studant{
 	private:
 		int id,age;
 		string name,course ,email,city,collage;
 	public:
	 setData(int i,string n,int a, string co , string em ,string ci, string col)
	 {
	 	id=i;
	 	name=n;
	 	age= a;
	 	course = co;
	 	email = em;
	 	city = ci;
	 	collage = col;
	}
	getData(){
		cout << "student  id :- " << id <<endl;
		cout<< "student Name :- "  << name <<endl;
		cout <<"student Age :- " << age<<endl;
		cout <<"student Course :- " << course << endl;
		cout << "student Email :- " <<email <<endl;
		cout<< "student city :- "<< city <<endl;
		cout<< "student collage :- " << collage <<endl;
	}	
 };
 
 int main(){
 	studant s1,s2,s3,s4;
 	s1.setData(1,"RaM",23,"bb","fggbsg","hgssgs","gsfdhg");
 	s1.getData();
 	s2.setData(2,"RajU",23,"bb","fggbsg","hgssgs","gsfdhg");
 	s2.getData();
 	s3.setData(3,"Raj",23,"bb","fggbsg","hgssgs","gsfdhg");
 	s3.getData();
 	s4.setData(4,"Raja",23,"bb","fggbsg","hgssgs","gsfdhg");
 	s4.getData();
 
 	return 0;
 }

