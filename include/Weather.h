#ifndef WEATHER_H_
#define WEATHER_H_

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <memory>

#define TEMPERATURE 30
#define PRECEPITATION 10
#define HUMIDITY 5
#define WIND_SPEED 15
#define DESCRIPTION "Sunny day"
#define CITY_NAME "Berlin"

using namespace std;

class Weather 
{
public:
    /**
     * @brief Construct a new Weather object
     * 
     */
    Weather() : _temperature(TEMPERATURE), _precepitation(PRECEPITATION), _humidity(HUMIDITY), _wind(WIND_SPEED), _description(DESCRIPTION), _city(CITY_NAME){};
    Weather(const Weather &);

    /**
     * @brief Get all informations related to weather of the object
     * 
     */
    void getWeather(void);

    /**
     * @brief Get the Weather City of the of the object
     * 
     * @param city_name 
     */
    void  getWeatherCity(string city_name);

    /**
     * @brief Get the Temperature of the object
     * 
     * @return int8_t 
     */
    int8_t getTemperature(void) const;

    /**
     * @brief Get the Precepitation of the object
     * 
     * @return int8_t 
     */
    int8_t getPrecepitation(void) const;

    /**
     * @brief Get the Humidity of the object
     * 
     * @return int8_t 
     */
    int8_t getHumidity(void) const;

    /**
     * @brief Get the Wind of the object
     * 
     * @return int8_t 
     */ 
    int8_t getWind(void) const;

    /**
     * @brief Get the Description of the object
     * 
     * @return string 
     */
    string getDescription(void) const;
    
    /**
     * @brief Get the City of the object
     * 
     * @return string 
     */
    string getCity(void) const;

private:

    /**
     * @brief Set the Temperature of the object
     * 
     * @param temperature 
     */
    void setTemperature(int8_t temperature);

    /**
     * @brief Set the Precepitation of the object
     * 
     * @param precepitation 
     */
    void setPrecepitation(int8_t precepitation);

    /**
     * @brief Set the Humidity of the object
     * 
     * @param humidity 
     */
    void setHumidity(int8_t humidity);

    /**
     * @brief Set the Wind of the object
     * 
     * @param wind 
     */
    void setWind(int8_t wind);

    /**
     * @brief Set the Description of the object
     * 
     * @param description 
     */
    void setDescription(string description);

    /**
     * @brief Set the City of the object
     * 
     * @param city 
     */
    void setCity(string city);

    int8_t _temperature;
    int8_t _precepitation;
    int8_t _humidity;
    int8_t _wind;
    string _description;
    string _city;
};

#endif //WEATHER_H_