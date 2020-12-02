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


// grab selection of dates
int * findDatesIndices(string beginDate, string endDate, const vector<string> &date) {
    static int *indices[2];
}


// need to define a function header here
int barometricCoefficient( const vector<string> &timestamp, int *baroptr) {
    cout << baroptr << endl;
    return 1;
}
// Vector is passed by reference and cannot be changed by this function.
float baroTest(const vector<float> &vec) {
    // for (int i=0; i < vec.size(); i++) {
    //     cout << vec[i] << endl;
    // }
    // Rounding error here
    float total;
    total = accumulate(vec.begin(), vec.end(), 0);
    return total;
}


int main() {
    // Read data from file.
    ifstream file ("../../data/weather/example.txt");

    // TODO: test the file opens and does not fail and fails
    if (!file.is_open()) {
        cout << "Error: Hey, you couldn't open this file." << endl;
        exit(-2);
    }

    string date, time;
    float airTemp, barometricPress, dewPoint, relativeHumidity, windDirection, windGust, windSpeed;
    
    string line;
    vector<float> barometrics;
    
    // Ignore header
    getline(file, line);
    // test you indeed get the header file first

    while (getline(file, line)) {
        stringstream ss (line);
        // test for returning the correct values and types
        ss >> date >> time;
        ss >> airTemp >> barometricPress >> dewPoint >> relativeHumidity >> windDirection >> windGust >> windSpeed;
        barometrics.push_back(barometricPress);
    }
    
    for (int i = 0; i < 4; i++) {
        cout << i << " " << barometrics[i] << endl;
    }

    float total;
    total = baroTest(barometrics);
    printf("Total %f\n", total);
    file.close();

    return 0;
}
