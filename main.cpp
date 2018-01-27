#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
struct teachers{
	string name;
	string surname;
	string subject;
	string type;
};
teachers first [100];

void input(){
	while (fin!="end."){
		cout<<fin;
	}
}

int main(){
	ifstream fin("index.txt");
	ofstream fout("schedule.txt");
	input(); 
	
}
