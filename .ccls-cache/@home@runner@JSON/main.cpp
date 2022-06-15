//Bari gisher
#include <iostream>
#include <string>
#include<sstream>
#include <fstream>
#include <map>
#include "json.hpp"

using json = nlohmann::json;
bool type_oper(std::string&);
double account_deposit(std::string&);
double account_withdraw(std::string&);
double account_chargebak(std::string&);
void do_operation(std::string& data);
double string_double(std::string& data);
bool is_number(std::string& data);
// creat_account();
struct Client{


};

std::map<unsigned int, double> client_id;

int main()
{
 std::string path = "accounts.json";
 std::string path1 = "transactions.json";
 std::ifstream file(path);
 
 json data;
 file >> data;

    unsigned int id;
  ///  
  bool type(data); //es xia senc anum?
  ///
    double amount;
}


bool type_oper(std::string& data)
{
  if (data == "deposit")
  {
    return true;
  }
  else if(data == "withdraw")
  {
    return false;
  }
  else
  {
    std::cout << "This operation does not define for account." << std::endl;
  }
  // stegh inch vor break a petq
}


bool is_number(std::string& data)
{
  int count = 0;
  for (int i = 0; i < data.length(); )     //es for lavy chi 
    {
      if (data[i] >= '0' && data[i] <= '9')
      {
        ++ i;
      }
      else if (data[i] == '.')
      {
        ++ i;
        ++ count;
      }
      else
      {
        std::cout << "For deposit or withdraw an account you cat input only numbers." << std::endl;
        return false;
      }
    }

  if (count == 0 || count == 1)
  {
   return true;
  }
  else
  {
     std::cout << "For deposit or withdraw an account you cat input only numbers." << std::endl;
    return false;
  }
}


void do_operation(std::string& data)
{
  if (type_oper(data))
  {
    account_deposit(data); // poxancel accounty +- arjeq@
  }
  else 
  {
    account_withdraw(data);
  }
}


double string_double(std::string& data)
{
  double double_val = std::stod (data);
  return double_val;
}


std::string double_string(double& amount)
{
  std::string string_val = std::to_string (amount);
  return string_val;
}


double account_deposit(std::string& data)
{
 double amount = 0;
 return amount += 1.1;
}
//


double account_withdraw(std::string& data)
{
  double amount = 0;
  if (amount <= 0)
  {
    std::cout << "Balance of account is 0. You can not do this operation." << std::endl;
    return 0;
  }
  else
  {
    return amount -= 1.1;
  }
}

