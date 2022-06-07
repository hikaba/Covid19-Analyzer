// Name: Hiba Kaawan
// Student Number: 250921401
// CS3307 Assignment 1

// /**
//  * Class that represents a Country record with attributes name, code, dummy, newConfirmedCases, newDeaths, newRecoveredCases, totConfirmedCases,totDeaths, totRecoveredCases
//  * @author hiba kaawan
//  *
//  */
#include "CountryRecord.h"
using namespace std;

    string name;
    string code;
    string dummy;
    int newConfirmedCases;
    int newDeaths;
    int newRecoveredCases;
    int totConfirmedCases;
    int totDeaths;
    int totRecoveredCases;

//Constructor, reads in a string, and parses it for attributes
CountryRecord::CountryRecord(string countryInformation){

    // Gettting name of country
    int index = countryInformation.find('"',1);
    string countName = countryInformation.substr(0,index + 1);
    countryInformation.erase(0,index + 2);
    countName.erase(countName.begin());
    countName.pop_back();
    name = countName;  // COUNTRY NAME

    stringstream countryStream(countryInformation);

    getline(countryStream, code, ',');
    code.erase(code.begin());
    code.pop_back();

    getline(countryStream, dummy, ',');

    getline(countryStream, dummy, ',');
    newConfirmedCases = stoi(dummy);
    getline(countryStream, dummy, ',');
    newDeaths = stoi(dummy);
    getline(countryStream, dummy, ',');
    newRecoveredCases = stoi(dummy);
    getline(countryStream, dummy, ',');
    getline(countryStream, dummy, ',');
    getline(countryStream, dummy, ',');
    totConfirmedCases = stoi(dummy);
    getline(countryStream, dummy, ',');
    totDeaths = stoi(dummy);
    getline(countryStream, dummy, ',');
    totRecoveredCases = stoi(dummy);

//getter methods...
}
// /**
//  * getName method returns a string representation of country name
//  * @return name
//  */
    string CountryRecord::getName() {
		return name;
	}
  // /**
  //  * getCode method returns a string representation of country code
  //  * @return code
  //  */
    string CountryRecord::getCode() {
		return code;
	}
  // /**
  //  * getNewConfirmedCases method returns a int representation of newConfirmedCases
  //  * @return newConfirmedCases
  //  */
	int CountryRecord::getNewConfirmedCases() {
		return newConfirmedCases;
	}
  // /**
  //  * getNewDeaths method returns a int representation of newDeaths
  //  * @return newDeaths
  //  */
	int CountryRecord::getNewDeaths() {
		return newDeaths;
	}
  // /**
  //  * getNewRecoveredCases method returns a int representation of newRecoveredCases
  //  * @return newRecoveredCases
  //  */
	int CountryRecord::getNewRecoveredCases() {
		return newRecoveredCases;
	}
  // /**
  //  * getTotConfirmedCases method returns a int representation of totConfirmedCases
  //  * @return totConfirmedCases
  //  */
	int CountryRecord::getTotConfirmedCases() {
		return totConfirmedCases;
	}
  // /**
  //  * getTotDeaths method returns a int representation of totDeaths
  //  * @return totDeaths
  //  */
	int CountryRecord::getTotDeaths() {
		return totDeaths;
	}
  // /**
  //  * getTotRecoveredCases method returns a int representation of totRecoveredCases
  //  * @return totRecoveredCases
  //  */
	int CountryRecord::getTotRecoveredCases() {
		return totRecoveredCases;
	}

//Destructor
    CountryRecord::~CountryRecord(){

    }

