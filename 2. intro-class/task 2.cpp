#include<iostream>
using namespace std;

class cars {
	public:
		int id,release_year;
		char company_name[50],color[50],model[50];
		setdata()
		{
			cout<<"enter id : ";
			cin>>id;
			cout<<"company name : ";
			cin>>company_name;
			cout<<"color : ";
			cin>>color;
			cout<<"model : ";
			cin>>model;
			cout<<"release year : ";
			cin>>release_year;
		}
		get(){
			cout<<"id : "<<id<<endl;
			cout<<"company name : "<<company_name<<endl;
			cout<<"color : "<<color<<endl;
			cout<<"model : "<<model<<endl;
			cout<<"release year : "<<release_year<<endl;
		}
};

int main()
{	
	cars s[4];
	int i;
	
	for(i=0; i<=4; i++){
		s[i].setdata();
	}
	for(i=0; i<=4; i++){
		s[i].get();
	}
	
	return 0;	
}
