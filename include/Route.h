#pragma once
#include<string>
#include<vector>
using namespace std;

class Route
{

private:
	int routeId{};
	std::string zoneName;
	std::string startLocation;
	std::string endLocation;
	std::vector <std::string> stops;

public:
	Route() = default;
	Route(int id, std::string zone, std::string start, std::string end, std::vector <std::string>stops);
	int getRouteId() const;
	const std::string& getZoneName() const;
	const std::string& getStartLocation() const;
	const std::string& getEndLocation() const;
	const std::vector<std::string>& getStops() const;

};
