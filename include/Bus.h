#pragma once
#include<string>
#include"Enums.h"

class Bus
{

private:
	int busId{};
	std::string busColor;
	int capacity{};
	BusStatus status{ BusStatus::Active };
	std::string currentLocation;
	int routeId{ -1 };

public:
	Bus() = default;
	Bus(int id, std::string color, int cap);
	
	int getBusId() const;
	int getRouteId() const; 
	BusStatus getStatus() const;
	int getCapacity() const;
	const std::string& getColor() const;
	const std::string& getCurrentLocation() const;

	void updateLocation(const std::string& loc);
	void updateStatus(BusStatus st);
	void assignToRoute(int rId);

};