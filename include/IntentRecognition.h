#ifndef INTENT_RECOGNITION_H_
#define INTENT_RECOGNITION_H_
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <memory>
#include "Facts.h"
#include "Weather.h"
using namespace std;

/**
 * @brief IntentRecognition Class
 * 
 */
class IntentRecognition 
{
private:
    vector<string> _fact_keywords {"fact","certitude","truth","verity","actuality"} ;
    vector<string> _weather_keywords {"weather","meteo","atmospheric","climate"};
public:
    /**
     * @brief Construct a new Intent Recognition object
     * 
     */
    IntentRecognition(){};
    IntentRecognition(const IntentRecognition &);
    
    /**
     * @brief find Keyword in the command line input
     * 
     * @param keyword 
     * @param command 
     * @param command_length 
     * @return uint8_t 
     */
    
    uint8_t findKeyword(vector<string> keyword, char* command[], int command_length);
    /**
     * @brief Get the Fact object
     * 
     */
    
    void getFact();
    /**
     * @brief Get the Weather object
     * 
     */
    void getWeather();
    
    /**
     * @brief Get the Weather City object
     * 
     * @param city_name 
     */
    void getWeatherCity(string city_name);
    
    /**
     * @brief Get the Fact Keywords object
     * 
     * @return vector<string> 
     */
    vector<string> getFactKeywords();
    
    /**
     * @brief Get the Weather Keywords object
     * 
     * @return vector<string> 
     */
    vector<string> getWeatherKeywords();
};
#endif //INTENT_RECOGNITION_H_