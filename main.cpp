#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
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
	if(file.is_open())
	{
		while(file>>c.name>>c.lat>>c.lon)
		{
			cities.push_back(c);
		}
		
	}
	file.close();
	double lat = 0,lon = 0, maxv = 0;
	string maxcity1, maxcity2;
	for (int i = 0; i < cities.size() - 1; ++i)
	{
		for(int j = i+1; j < cities.size(); ++j)
		{
			double lats = cities[i].lat - cities[j].lat;
			double lons = cities[i].lon - cities[j].lon;
			double distance = sqrt(lats*lats + lons*lons);
			if(maxv < distance)
			{
				maxv = distance;
				maxcity1 = cities[i].name;
				maxcity2 = cities[j].name;
			}
		}
	}
cout<<"\nthe biggest dist:"<<endl;
cout<<maxcity1<<" and "<<maxcity2<<" with distance = "<<maxv<<endl;


return 0;
}
