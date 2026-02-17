#include "Route.h"

Route::Route(int id, std::string zone, std::string start, std::string end, std::vector<std::string> s)
    : routeId(id), zoneName(std::move(zone)), startLocation(std::move(start)), endLocation(std::move(end)), stops(std::move(s)) {}

int Route::getRouteId() const { return routeId; }
const std::string& Route::getZoneName() const { return zoneName; }
const std::string& Route::getStartLocation() const { return startLocation; }
const std::string& Route::getEndLocation() const { return endLocation; }
const std::vector<std::string>& Route::getStops() const { return stops; }
