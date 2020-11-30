#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <gtest/gtest.h>

using namespace std;


// need to define a function header here
int barometricCoefficient(string beginDate, string endDate, vector<string>* dates, vector<string>* times, vector<int>* pressures) {
    return 1;
}


int main() {
    // Read data from file.
    ifstream file ("../data/weather/2015.txt");

    // TODO: test the file opens and does not fail and fails
    if (!file.is_open()) {
        cout << "Error: couldn't open file." << endl;
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
    
    for (int i = 0; i < 5; i++) {
        cout << i << " " << barometrics[i] << endl;
    }

    file.close();

    return 0;
}
