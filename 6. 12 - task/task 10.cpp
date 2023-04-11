#include<iostream>
using namespace std;

main(){
	int n;
	cout << "20956 :- MAHUVA SURAT SF " <<endl;
	cout << "12957 :- Swarna Jayanti Rajdhani Express " <<endl;
	cout << "16318 :- HIMSAGAR EXP " <<endl;
	cout<< "Enter train number :- ";
	cin>>n;
	switch(n){
		case 20956 :
		      cout << "MAHUVA SURAT SF " <<endl;
		      cout << "source :- mahuva" <<endl;
		      cout << "destinatin :- surat" <<endl;
		      cout << "DISTANCE In KMs :- 631km" <<endl;
		      cout<< "Duration :- 11hr 20min" <<endl;
		     break;
		case 12957 :  
		      cout << "Swarna Jayanti Rajdhani Express " <<endl;
		      cout << "source :- Ahmedabad Junction " <<endl;
		      cout << "destinatin :- New Delhi  " <<endl;
		      cout << "DISTANCE In KMs :- 935 km " <<endl;
		      cout<< "Duration :- 13 hrs" <<endl;
		     break; 
		case 16318 :
		      cout << "HIMSAGAR EXP " <<endl;
		      cout << "source :- Shri Mata Vaishno Devi Katra (kashmir) " <<endl;
		      cout << "destinatin :- Kanniyakumari  " <<endl;
		      cout << "DISTANCE In KMs :- 3788 km " <<endl;
		      cout<< "Duration :- 72 hrs  50 min" <<endl;
		     break;   
	   default : cout<<"please enter valid train number";
	}
}
