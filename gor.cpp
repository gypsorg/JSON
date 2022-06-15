// #include <iostream>
// #include "json.hpp"
// #include <fstream>
// #include <string>
// #include "accounts.json"

// using json = nlohmann::json;

// int main()
// {

//     // jdEmployees
//     std::string path="accounts.json";
//     std::ifstream file(path);
    
//     nlohmann::json jdEmployees;
//     file>>jdEmployees;

//     // Access the values
//     std::string fName = jdEmployees.value("firstName", "oops");
//     std::string lName = jdEmployees.value("lastName", "oops");
//     int sID = jdEmployees.value("StudentID", 0);
//     std::string dept = jdEmployees.value("Department", "oops");
    
//     // Print the values
//     std::cout << "First Name: " << fName << std::endl;
//     std::cout << "Last Name: " << lName << std::endl;
//     std::cout << "Student ID: " << sID << std::endl;
//     std::cout << "Department: " << dept << std::endl;
              
//     return 0;
// }
