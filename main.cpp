#include <iostream>
#include <fstream>
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
	City c;
	ifstream file("cities10k.txt");
	string name;
	double lat, lon;
	if(file.is_open())
	{
		while(file>>name>>lat>>lon)
		{
			cout<<name<<endl;
		}
		
	}
	file.close();





}
