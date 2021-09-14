#ifndef FACTS_H_
#define FACTS_H_
#include <iostream>
#include <string>

/**
 * @brief Facts Class
 * 
 */
class Facts
{
private:
  std::string _fact_description;
  /**
   * @brief Set the Fact Description object
   * 
   * @param fact 
   */
  void setFactDescription(std::string fact);

public:
  /**
   * @brief Construct a new Facts object
   * 
   */
  Facts() : _fact_description(""){};
  Facts(const Facts &);
  
  /**
   * @brief Destroy the Facts object
   * 
   */
  ~Facts(){};
  
  /**
   * @brief Get the Fact Description object
   * 
   * @return std::string 
   */
  std::string getFactDescription(void);

  /**
   * @brief Get the Fact object
   * 
   */
  void getFact();
};

#endif //FACTS_H_