#include <iostream>

struct Phone
{
    int city_code;
    int station_code;
    int abonent_code;
};

int main()
{
    using namespace std;

    Phone first_phone { 985, 886, 6885 };
    Phone second_phone {};

    cout << "Enter second phone city code: " << endl;
    cin >> second_phone.city_code;
    cout << "Enter second phone station code: " << endl;
    cin >> second_phone.station_code;
    cout << "Enter second phone abonent code: " << endl;
    cin >> second_phone.abonent_code;

    cout << "First phone is: (" << first_phone.city_code << ") " << first_phone.station_code << "-" << first_phone.abonent_code << endl;
    cout << "Second phone is: (" << second_phone.city_code << ") " << second_phone.station_code << "-" << second_phone.abonent_code << endl;

    using namespace std;
    return 0 ;
}
