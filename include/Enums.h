#pragma once
#include<string>
using namespace std;
enum class Role {Customer, Employee};

enum class Bus {Active, Inactive};

enum class ShortDurationType { ShortJourney, OneHour, TwoHours, FourHours, SixHours, OneDayPass };
enum class LongDurtionType { Monthly, Quarterly, HalfYearly, Yearly };
enum class CustomerType {Child, Youth, Adult, Senior};
inline std::string to_string(Role r) {
    return (r == Role::Customer) ? "Customer" : "Employee";
}
