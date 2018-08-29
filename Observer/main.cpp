#include <iostream>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "ForecastDisplay.hpp"

int main() {
	WeatherData weather;
	CurrentConditionsDisplay display1(&weather);

	{
	ForecastDisplay display2(&weather);
	weather.setMeasurements(25, 13, 1024);
	weather.setMeasurements(30, 7, 1018);
	}
	
	weather.setMeasurements(32, 4, 1040);

	return 0;
}