#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct City{
	string name;
	double lat;
	double lon;
};


int main()
{
	vector<City> cities;
	fstream file;
	file.open("cities10k.txt", ios::in);
	if(file.is_open()) 
	{
		string line;
		while(getline(file, line))
		{
			cout<<line<<endl;
		}
	}





}
