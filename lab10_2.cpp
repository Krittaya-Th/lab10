#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	string text;
	while(getline(source,text)){
		cout << text<<endl;
	}

    source.close();
    dest.close();
	return 0;
}
