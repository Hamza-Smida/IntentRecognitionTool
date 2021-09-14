/**
 * @file UT_Weather.cpp
 * @author Hamza Smida (HamzaSmida@yandex.com)
 * @brief unit test implementation for the Weather class
 * @version 0.1
 * @date 2021-09-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"gtest/gtest.h"
//define private as public to access private methods
#define private public
#include "Weather.h"


TEST(Weather,getWeather)
{
    Weather weather;
    weather.getWeather();
}

TEST(Weather,getWeatherCity)
{
    Weather weather;
    weather.getWeatherCity("Berlin");
}

TEST(Weather,getTemperature)
{
    Weather weather;
    weather.getTemperature();
}

TEST(Weather,getPrecepitation)
{
    Weather weather;
    weather.getPrecepitation();
}

TEST(Weather,getHumidity)
{
    Weather weather;
    weather.getPrecepitation();
}

TEST(Weather,getWind)
{
    Weather weather;
    weather.getPrecepitation();
}

TEST(Weather,getDescription)
{
    Weather weather;
    weather.getPrecepitation();
}

TEST(Weather,getCity)
{
    Weather weather;
    weather.setTemperature(10);
    int8_t val =10;
    EXPECT_EQ(weather.getTemperature(),val);
}

TEST(Weather,setPrecepitation)
{
    Weather weather;
    weather.setPrecepitation(10);
    int8_t val =10;
    EXPECT_EQ(weather.getPrecepitation(),val);
}

TEST(Weather,setHumidity)
{
    Weather weather;
    weather.setHumidity(10);
    int8_t val =10;
    EXPECT_EQ(weather.getHumidity(),val);
}

TEST(Weather,setWind)
{
    Weather weather;
    weather.setWind(10);
    int8_t val =10;
    EXPECT_EQ(weather.getWind(),val);
}

TEST(Weather,setDescription)
{
    Weather weather;
    weather.setDescription("test");
    string val ="test";
    EXPECT_EQ(weather.getDescription(),val);
}

TEST(Weather,setCity)
{
    Weather weather;
    weather.setCity("Berlin");
    string val ="Berlin";
    EXPECT_EQ(weather.getCity(),val);
}