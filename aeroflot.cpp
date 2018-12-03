#include "aeroflot.h"

using namespace std;

AEROFLOT::AEROFLOT() {
	destination = "unknown";
	route = 0;
	type = "unknown";

	cout << "Constructor without parameters called" << endl;
}

AEROFLOT::AEROFLOT(const std::string& destination, int route, const std::string& type) {
	this->destination = destination;
	this->route = route;
	this->type = type;

	cout << "Constructor with parameters called" << endl;
}

AEROFLOT::AEROFLOT(const AEROFLOT& aeroflot) {
	destination = aeroflot.destination;
	route = aeroflot.route;
	type = aeroflot.type;

	cout << "Constructor of copying called" << endl;
}

string AEROFLOT::getDestination() { 
	return destination;
}

int AEROFLOT::getRoute() {
	return route;
}

string AEROFLOT::getType() {
	return type;
}

void AEROFLOT::setDestination(const string& destination) {
	this->destination = destination;
}

void AEROFLOT::setRoute(int route) {
	this->route = route;
}

void AEROFLOT::setType(const string& type) {
	this->type = type;
}

void AEROFLOT::Read() {
	cout << "Enter destination: ";
	cin >> destination;
	cout << "Enter route: ";
	cin >> route;
	cout << "Enter type: ";
	cin >> type;
}

void AEROFLOT::Print() {
	cout << "#" << route << ": destination: " << destination << ", type: " << type << endl;
}

AEROFLOT::~AEROFLOT() {
	cout << "Destructor called" << endl;
}