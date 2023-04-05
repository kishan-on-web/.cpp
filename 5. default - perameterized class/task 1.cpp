#include<iostream>
using namespace std;


class diamound {
	private:
    	int id;
    	string name;
    	int stffqun; 
    	int revenu;
    	int importdiamond;
    	int exportdiamound;
    	string compnyCEO;


	public:
     	diamound(int id,string name,int stffqun, int revenu,int importdiamond,int exportdiamound,string compnyCEO)
        {
        	this->id = id;
        	this->name = name;
        	this->stffqun = stffqun;
        	this->revenu = revenu;
        	this->importdiamond = importdiamond;
        	this->exportdiamound = exportdiamound; 
        	this->compnyCEO = compnyCEO;
    	}
    
    	diamound(){
        	cout << "enter Id :- ";
        	cin >> this-> id;
        	cout << "enter name :-";
        	cin >> this-> name;
        	cout << "enter stff quntity:- ";
        	cin >> this-> stffqun;
        	cout << "enter the revenu:- ";
        	cin >> this-> revenu;
        	cout << "enter the exportdiamound :- ";
        	cin >> this-> exportdiamound;
        	cout << "enter the importdiamound :- ";
        	cin >> this-> importdiamond;
        	cout << "enter the compnyCEO :- ";
        	cin >> this-> compnyCEO;
    	}


    	void getData()
   		{
       		cout << endl << "id = " << id << endl;
       		cout << endl << "name =" << name << endl;
       		cout << endl << "stffqun =" << stffqun <<endl;
       		cout << endl << "revenu =" << revenu << endl;
       		cout << endl << "importdiamond =" << importdiamond << endl;
       		cout << endl << "exportdiamound =" << exportdiamound << endl;
       		cout << endl << "compnyCEO =" << compnyCEO << endl;
   		}
};


int main(){


    diamound d1,d2,d3;


    d1.getData();
    d2.getData();
    d3.getData();
    
    return 0;
}


