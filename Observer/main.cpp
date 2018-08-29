#include <iostream>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"

int main() {
	WeatherData weather;
	CurrentConditionsDisplay display(&weather);
	weather.registerObserver(&display);

	weather.setMeasurements(25, 13, 1024);
	weather.setMeasurements(30, 7, 1039);
	weather.setMeasurements(32, 4, 1040);

	return 0;
}