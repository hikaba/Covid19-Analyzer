// Name: Hiba Kaawan
// Student Number: 250921401
// CS3307 Assignment 1

//header file for CountryRecord.cpp

#ifndef COUNTRY_RECORD_H
#define COUNTRY_RECORD_H
#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class CountryRecord{
private:
    string name;
    string code;
    string dummy;
    int newConfirmedCases;
    int newDeaths;
    int newRecoveredCases;
    int totConfirmedCases;
    int totDeaths;
    int totRecoveredCases;

public:
    CountryRecord();
    CountryRecord(string countryInformation);
    string getName();
    string getCode();
    int getNewConfirmedCases();
    int getNewDeaths();
    int getNewRecoveredCases();
    int getTotConfirmedCases();
    int getTotDeaths();
    int getTotRecoveredCases();
    ~CountryRecord();
};

#endif
