/*Population projection) The U.S. Census Bureau projects population based on the
following assumptions:
- One birth every 7 seconds
- One death every 13 seconds
- One new immigrant every 45 seconds
Write a program that displays the population for each of the next five years. Assume
the current population is 312,032,486 and one year has 365 days. Hint: In C++, if two
integers perform division, the result is the quotient. The fractional part is truncated.
For example, 5 / 4 is 1 (not 1.25) and 10 / 4 is 2 (not 2.5). To get an accurate result
with the fractional part, one of the values involved in the division must be a number
with a decimal point. For example, 5.0 / 4 is 1.25 and 10 / 4.0 is 2.5.
@uthor Edin Korkic
*/

#include <iostream>

using namespace std;

int main()
{
    cout << " Population for one year: " << (312032486 + (31536000 / 7) - (31536000 / 13) + (31536000 / 45)) << endl;
    cout << " Population for two years: " << (312032486 + ((31536000 / 7) - (31536000 / 13) + (31536000 / 45) * 2)) << endl;
    cout << " Population for three years: " << (312032486 + ((31536000 / 7) - (31536000 / 13) + (31536000 / 45) * 3)) << endl;
    cout << " Population for four years: " << (312032486 + ((31536000 / 7) - (31536000 / 13) + (31536000 / 45) * 4)) << endl;
    cout << " Population for five years: " << (312032486 + ((31536000 / 7) - (31536000 / 13) + (31536000 / 45) * 5)) << endl;

    return 0;
}
