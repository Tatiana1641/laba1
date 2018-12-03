#ifndef AEROFLOT_H
#define AEROFLOT_H

#include <iostream>
#include <string>

class AEROFLOT {
	std::string destination;
	int route;
	std::string type;

public:
	AEROFLOT();
	AEROFLOT(const std::string& destination, int route, const std::string& type);
	AEROFLOT(const AEROFLOT& aeroflot);

	std::string getDestination();
	int getRoute();
	std::string getType();

	void setDestination(const std::string& destination);
	void setRoute(int route);
	void setType(const std::string& type);

	void Read();
	void Print();

	~AEROFLOT();
};

#endif