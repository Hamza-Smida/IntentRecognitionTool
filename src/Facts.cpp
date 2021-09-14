/**
 * @file Facts.cpp
 * @author Hamza Smida (HamzaSmida@yandex.com)
 * @brief implemetation file for the Facts class
 * @version 0.1
 * @date 2021-09-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Facts.h"
void Facts::setFactDescription(std::string fact){
    _fact_description = fact;
};

std::string Facts::getFactDescription(void){
    return _fact_description;
};

void Facts::getFact(){
    setFactDescription("Intent : Get Fact");
    std::cout << getFactDescription() << std::endl;
}