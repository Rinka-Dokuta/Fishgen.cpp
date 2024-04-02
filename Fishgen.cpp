#include<iostream>
using namespace std;

void FishGen();

char input;
int main() { //Needed to create random
	srand(time(NULL)); //SEED FUNCTION. creates a random order after each run
	while (1) {
		cin >> input;
		FishGen();
	}

}




void FishGen() {
	int num = rand() % 100; //create number betweem 1-100
	if (num < 33) //33% chance of Carp
		cout << "You got yourself a Carp!" << endl;
	else if (num < 66) //33% chance of Woodskip
		cout << "You got yourself a Woodskip!" << endl;
	else if (num < 99) //33% chance of an Catfish
		cout << "You got yourself a Catfish!" << endl;
	else
		cout << "You got yourself nothing!" << endl;


}


