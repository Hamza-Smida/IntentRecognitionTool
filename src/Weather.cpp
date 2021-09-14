/**
 * @file Weather.cpp
 * @author Hamza Smida (HamzaSmida@yandex.com)
 * @brief implemetation file for the Weather class
 * @version 0.1
 * @date 2021-09-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Weather.h"

void Weather::getWeather()
{
    auto print = [](string str) {cout << str << endl; };
    print("Intent: Get Weather");
    print("today is : ");
    print(getDescription());
    print(to_string(getTemperature()) + " °C");
    print(to_string(getPrecepitation()) + " %");
    print(to_string(getWind()) + " km/h");
};

void Weather::getWeatherCity(string city_name)
{
    auto print = [](string str) { cout << str << endl;};
    print("Intent: Get Weather City");
    print("In "+ city_name);
    print("today is : ");
    print(getDescription());
    print(to_string(getTemperature()) + " °C");
    print(to_string(getPrecepitation()) + " %");
    print(to_string(getWind()) + " km/h");
}

int8_t Weather::getTemperature() const
{
    return _temperature;
}

int8_t Weather::getPrecepitation() const
{
    return _precepitation;
}

int8_t Weather::getHumidity() const
{
    return _humidity;
}

int8_t Weather::getWind() const
{
    return _wind;
}

string Weather::getDescription() const
{
    return _description;
}

string Weather::getCity() const
{
    return _city;
}

void Weather::setTemperature(int8_t temperature)
{
    _temperature = temperature;
}

void Weather::setPrecepitation(int8_t precepitation)
{
    _precepitation = precepitation;
}

void Weather::setHumidity(int8_t humidity)
{
    _humidity = humidity;
}

void Weather::setWind(int8_t wind)
{
    _wind = wind;
}

void Weather::setDescription(string description)
{
    _description = description;
}

void Weather::setCity(string city)
{
    _city = city;
}
