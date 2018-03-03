/*(Average sales in grams) Assume a vendor sells 6 kilograms of grocery in 15 minutes and
30 minutes and 30 seconds. Write a program that displays the average sale in grams
per hour (Note that 1 kilogram is 1000 grams).
@uthor Edin Korkic
*/

#include <iostream>

using namespace std;

int main()
{
    // formula kg/h ^ g/min
    cout << " The average sale in grams per hour " << (6000/45.5) * 60 <<endl;

    return 0;
}
