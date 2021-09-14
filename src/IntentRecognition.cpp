/**
 * @file IntentRecognition.cpp
 * @author Hamza Smida (HamzaSmida@yandex.com)
 * @brief implemetation file for the IntentRecognition class
 * @version 0.1
 * @date 2021-09-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "IntentRecognition.h"

uint8_t IntentRecognition::findKeyword(vector<string> keyword, char ** command, int command_length){
    vector<string> keys(command, command + command_length);
    uint8_t position;
    
    //find one of the elements related to keyword from the command input    
    // search by keyword
    for (uint8_t it_keyword= 0; it_keyword< keyword.size(); it_keyword++)
    {
        // search one specific keyword within the whole command line input
        for (uint8_t it_keys = 0; it_keys < keys.size(); it_keys++)
        {
            // if the keyword found return with it's position
            if(keys.at(it_keys)==keyword.at(it_keyword))
            {
                position=it_keys;
                return position;
            };
        }
    };
    return 0;
}

void IntentRecognition::getFact(){
    Facts fact;
    fact.getFact();
};

void IntentRecognition::getWeather(){
    Weather weather;
    weather.getWeather();
};

void IntentRecognition::getWeatherCity(string city_name){
    Weather weather;
    weather.getWeatherCity(city_name);
};

vector<string> IntentRecognition::getFactKeywords(){
    return _fact_keywords;
};

vector<string> IntentRecognition::getWeatherKeywords(){
    return _weather_keywords;
};