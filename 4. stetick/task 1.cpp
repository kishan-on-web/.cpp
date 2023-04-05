#include<iostream>
using namespace std;

class hotel{
	private:
		int id,ratting,year,staff,room;
		string name,type;
		static string location;
	public:
		setData(){
			cout << "Enter hotel id  ";
			cin >> this->id;
			cout << "Enter hotel name  ";
			cin>> this->name ;
			cout << "Enter hotel Type  ";
			cin>> this->type ;
			cout << "Enter hotel ratting  ";
			cin>> this->ratting ;
			cout << "Enter hotel Establish year  ";
			cin>> this->year ;
			cout << "Enter hotel staff quantity  ";
			cin>> this->staff ;
			cout << "Enter hotel room quantity  ";
			cin>> this->room ;
		}
		getData(){
			cout << "hotel id is :-"<< this->id <<endl;
			cout << "hotel name is :-"<< this->name <<endl;
			cout << "hotel type is :-"<< this->type <<endl;
			cout << "hotel ratting is :-"<< this->ratting<<endl;
			cout << "hotel Establish year is :-"<< this->year <<endl;
			cout << "hotel staff quantity is :-"<< this->staff <<endl;
			cout << "hotel room quantity is :-"<< this->room <<endl;	
		}
		static getstaticData(){
			cout << "Hotel location is :" << location << endl;
		}
};

string hotel::location = "surat";

int main(){
	
	int n;
	
	cout << "How many hotel data you enter :- ";
	cin >> n;
	
	hotel h[n];
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
