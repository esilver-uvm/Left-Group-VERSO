#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    //initial date string
    std::string date_str = "2022-03-17 10:45:30";
    //initialize blank date object
    std::tm date_obj = {};
    //wrap date in stream
    std::istringstream ss(date_str);
    //write date from stream to date object
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
    //secondary string stream
    std::stringstream formatted_date_ss;
    //output date formatted
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    std::string formatted_date = formatted_date_ss.str();
    //print formatted date
    std::cout << formatted_date << std::endl;


    return 0;
}
