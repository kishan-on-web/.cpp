#include<iostream>
using namespace std;

int main()
{
	int i;
	char name[50];
	
	cout << "Enter any string: ";
	cin >> name;
	
	for(i=0;i<50;i++)
    {
        if(name[0]>=97 && name[0]<=122){
			name[i] = name [i] - 32;
		}
		
		else if(i%2==0){
			if(name[i]>=65 && name[i]<=90){
				name[i] = name [i] + 32;
			}
			else if(name[i]>=97 && name[i]<=122){
				name[i] = name [i] - 32;
			}
		}
    }
    cout << "String in togglecase is: " << name;
}
