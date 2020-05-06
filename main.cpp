#include <iostream>
#include <fstream>
using namespace std;


int main(int argc, char** argv) {
	ifstream wejscie;
	ofstream wyjscie;
	
	wejscie.open("plikwej.txt");
	wyjscie.open("wyj.json");
	int t[10];
	
	if (wejscie.good())
	{
		while(!wejscie.eof())
		for(int i=0; i<10; i++)
		wejscie>>t[i];
	}
	
	int naj=t[0];
	for(int i=0; i<10; i++)
	{
		if(naj<t[i])
		naj=t[i];
	}
	wyjscie<<" [\n { \n "najwieksza" : ","<<naj;
	wyjscie.close();
	wejscie.clode();
	
	return 0;
}
