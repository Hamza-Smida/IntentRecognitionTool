/**
 * @file Main.cpp
 * @author Hamza Smida (HamzaSmida@yandex.com)
 * @brief Simple Intent Recognition Tool main Function
 * @version 0.1
 * @date 2021-09-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "IntentRecognition.h"
#include "Facts.h"
#include "Weather.h"
using namespace std;

int main(int argc, char **argv)
{

    if(argc == 1)
    {
        cout << "please run IntentRec_run --help" <<endl;
    }
    else if (argc == 2)
    {
        string str = argv[1];
        if(str == "--help")
        {
            cout << "ask about today's weather or a fact" <<endl;
            cout << "exemple: ./IntentRec_run what is the weather like today ?"<<endl;
        }
    }
    else
    {
        //do nothing
    }

    IntentRecognition intent_rec_obj ;
    // find keyword related to weather in the command line
    if (intent_rec_obj.findKeyword(intent_rec_obj.getWeatherKeywords(),argv,argc))
    {
        //if there is "in" the next word should be a city
        if (int pos = intent_rec_obj.findKeyword({"in"},argv,argc))
        {
            intent_rec_obj.getWeatherCity(argv[pos+1]);
        }
        else
        {
            intent_rec_obj.getWeather();
        }
    } //find keyword related to facts in the command line
    else if (intent_rec_obj.findKeyword(intent_rec_obj.getFactKeywords(),argv,argc))
    {
        intent_rec_obj.getFact();
    }
    else
    {
        //do nothing
    }
    return 0;
}
