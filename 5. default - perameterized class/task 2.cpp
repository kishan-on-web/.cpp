#include<iostream>
using namespace std;

class cafe{
	private :
		int id,rating,year,quantity;
		string name,type,location;
	public :
		cafe() // perameterized constructor
		{
			cout << "Enter hotel id  ";
			cin >> this->id;
			cout << "Enter hotel name  ";
			cin>> this->name ;
			cout << "Enter hotel Type  ";
			cin>> this->type ;
			cout << "Enter hotel ratting  ";
			cin>> this->rating ;
			cout << "Enter hotel Establish year  ";
			cin>> this->year ;
			cout << "Enter hotel staff quantity  ";
			cin>> this->quantity ;
		}
		getData(){
			cout<<"id : "<< this->id <<endl;
			cout<<"name : "<< this->name <<endl;
			cout<<"type : "<< this->type <<endl;
			cout<<"rating : "<< this->rating <<endl;
			cout<<"location : "<< this->location <<endl;
			cout<<"establish-year : "<< this->year <<endl;
			cout<<"staff-quantity : "<< this->quantity <<endl;
		}
};

int main(){
	
	int n;
			
	cout << "How many hotel data you enter :- ";
	cin >> n;
	
	cafe c[n];
	int i;
	
	for(i=0; i<=n; i++){
		c[i]=cafe();
	}
	for(i=0; i<=n; i++){
		c[i].getData();
	}
	return 0;	
}

