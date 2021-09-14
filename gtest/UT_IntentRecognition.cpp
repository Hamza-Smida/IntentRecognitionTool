/**
 * @file UT_IntentRecognition.cpp
 * @author Hamza Smida (HamzaSmida@yandex.com)
 * @brief unit test implementation for the IntentRecognition class
 * @version 0.1
 * @date 2021-09-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"gtest/gtest.h"
#include "IntentRecognition.h"

TEST(IntentRecognition,getFact)
{
    IntentRecognition intent_recognition;
    intent_recognition.getFact();
}

TEST(IntentRecognition,getWeather)
{
    IntentRecognition intent_recognition;
    intent_recognition.getWeather();
}

TEST(IntentRecognition,getWeatherCity)
{
    IntentRecognition intent_recognition;
    intent_recognition.getWeatherCity("Tunisia");
}

TEST(IntentRecognition,getFactKeywords)
{
    IntentRecognition intent_recognition;
    vector<string> facts= intent_recognition.getFactKeywords();
    vector<string> facts2= {"fact","certitude","truth","verity","actuality"};
    for (size_t i = 0; i < facts.size(); i++)
    {
        if (i<facts2.size())
        {
            EXPECT_EQ(facts[i],facts2[i]);
        }
        
    }
    
}

TEST(IntentRecognition,getWeatherKeywords)
{
    IntentRecognition intent_recognition;
    vector<string> facts= intent_recognition.getWeatherKeywords();
    vector<string> facts2= {"weather","meteo","atmospheric","climate"};
    for (size_t i = 0; i < facts.size(); i++)
    {
        if (i<facts2.size())
        {
            EXPECT_EQ(facts[i],facts2[i]);
        }
        
    }
}

TEST(IntentRecognition,findKeyword)
{
    IntentRecognition intent_recognition;
    char * command[]= {"what","is","the","weather","today","?"};
    int command_length = 6;
    EXPECT_FALSE(intent_recognition.findKeyword(intent_recognition.getFactKeywords(),command,command_length));
}

TEST(IntentRecognition,findKeyword_2)
{
    IntentRecognition intent_recognition;
    char * command[]= {"tell","me","an","intresting","fact","?"};
    int command_length = 6;
    EXPECT_TRUE(intent_recognition.findKeyword(intent_recognition.getFactKeywords(),command,command_length));
}