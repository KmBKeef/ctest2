#include <iostream>

using namespace std;

int main() {
	
	int no;
	
	cout << "Enter numberes from 8 to 23 : " << flush;
	
	for(int x = 8; x >= 8 && x <= 23;) {
	
	cin >> no;
	if(no == x && x < 23) {
		cout << "continue: " << flush;
		x++;	
	}
	
	else if(no == 23){
		cout << "Finally...   " << flush;
		break; 
	}

	else {
		cout << "Try again: " << flush;
		
	}

	}
	
	cout << "Excellent A-level Student" << endl;	
	return 0;
	}
