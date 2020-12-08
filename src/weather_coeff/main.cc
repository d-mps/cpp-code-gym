/**
 * Description: Write a function that accepts a beginning date and time, 
 * and an ending date and time. Inclusive of those dates and times,
 * return the coefficient of the slope of the barometric pressure.
 * 
 * Given: Text files of weather data for years 2012 through 2015. 
 * Each observation includes, respectively:
 *     date, time, temp, barometric pressure, dew point, humidity, wind dir, wind gust, wind speed
 * 
 * @author Diana Spencer
 * 
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <numeric>

using namespace std;


// This function can later be overloaded.
int * getRangeIndexes(string beginDate, string endDate, const vector<string> & date) {
    int beginIndex = -1;
    int endIndex = -1;

    for (int i=0; i < date.size(); i++) {  // O(N) time complexity, too slow! Binary search is faster O(Log(N))
        if (beginIndex == -1 && date[i] == beginDate) {
            beginIndex = i;
        }

        if (date[i] == endDate) {
            endIndex = i;
        }
    }

    static int indexes [2] = { beginIndex, endIndex };
    return indexes;
}

// Vector is passed by reference and cannot be changed by this function because of const.
float slope(const vector<float> & data, int * range) {
    float x, y, result;
    x = data[*range++];
    y = data[*range];
    result =  y / x;
    printf(" x= %f , y= %f\n", x, y);
    return result;
}

int main() {
    // Read data from file.
    ifstream file ("../../data/weather/example.txt");

    // TODO: test file opens successfully and does not fail
    if (!file.is_open()) {
        cout << "Error: Hey, you couldn't open this file." << endl;
        exit(-2);
    }

    // user insert begin and end timestamps
    string beginDate = "2012_01_02";
    string endDate = "2012_01_03";

    string date, time;
    float airTemp, barometricPress, dewPoint, relativeHumidity, windDirection, windGust, windSpeed;

    string line;
    vector<float> barometrics;
    vector<string> dates;
    
    // Ignore header
    getline(file, line);
    // test you indeed get the header file first

    // Read in data from file
    while (getline(file, line)) {
        stringstream ss (line);
        // test for returning the correct values and types
        ss >> date >> time;
        ss >> airTemp >> barometricPress >> dewPoint >> relativeHumidity >> windDirection >> windGust >> windSpeed;

        barometrics.push_back(barometricPress);
        dates.push_back(date);
    }

    float coeff;
    int * range;
    range = getRangeIndexes(beginDate, endDate, dates);
    coeff = slope(barometrics, range);
    printf("coeff = %f\n", coeff);
 
    file.close();

    return 0;
}
