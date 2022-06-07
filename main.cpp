// Name: Hiba Kaawan
// Student Number: 250921401
// CS3307 Assignment 1

#include <iostream>
#include "CountryRecord.h"
#include "printGraph.h"

using namespace std;

int main(){
    string filename;
    int sortBy;
    int sortOrder;
    vector<CountryRecord> records;



    cout << "--------- Welcome! This program will parse through a file and return sorted data ---------"<<endl;
    cout << "please enter the filename: ";
    cin >> filename;
    cout << "How would you like the data to be sorted? Enter the digit that corresponds to the method you would like."<<endl;
    cout << " 1 = new confirmed cases"<<endl;
    cout << " 2 = new deaths"<<endl;
    cout << " 3 = new recovered cases"<<endl;
    cout << " 4 = total confirmed cases"<<endl;
    cout << " 5 = total deaths"<<endl;
    cout << " 6 = total recovered cases"<<endl;
    cout << "Enter your choice here: ";
    cin >> sortBy;
    cout << "Would you like it to be sorted in ascending or descending order? Type 1 for ascending or 2 for descending: ";
    cin >> sortOrder;

    if (sortBy < 1 || sortBy >6){
        cout << "Wrong input...";
        return 0;
    }
    if (sortOrder < 1 || sortOrder > 2){
        cout << "Wrong input...";
        return 0;
    }

//checks to see if file is correct
    ifstream recordFile(filename);
    if (recordFile.fail()){
        cout << "Invalid File or File DNE";
    }

    string line;
    getline(recordFile, line); //skips first line

//stores records in vector
    while(getline(recordFile, line))
    {
        CountryRecord r(line);
        records.push_back(r);
    }

  //sorting by 1 = new confirmed cases
    if (sortBy==1 && sortOrder==1){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getNewConfirmedCases() < r2.getNewConfirmedCases(); //ascending
        });
        printGraph(1,1,records);
    }

    else if(sortBy == 1 && sortOrder ==2){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getNewConfirmedCases() > r2.getNewConfirmedCases(); //descending
        });
        printGraph(1,2,records);

    }

  //sorting by 2 = new deaths
    else if(sortBy == 2 && sortOrder ==1){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getNewDeaths() < r2.getNewDeaths(); //ascending
        });
        printGraph(2,1,records);

    }
    else if(sortBy == 2 && sortOrder ==2){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getNewDeaths() > r2.getNewDeaths(); //descending
        });
        printGraph(2,2,records);

    }

  //sorting by 3 = new recovered cases
    else if(sortBy == 3 && sortOrder ==1){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getNewRecoveredCases() < r2.getNewRecoveredCases(); //ascending
        });
        printGraph(3,1,records);

    }
    else if(sortBy == 3 && sortOrder ==2){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getNewRecoveredCases() > r2.getNewRecoveredCases(); //descending
        });
        printGraph(3,2,records);

    }

    //sorting by 4 = total confirmed cases
    else if(sortBy == 4 && sortOrder ==1){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getTotConfirmedCases() < r2.getTotConfirmedCases(); //ascending
        });
        printGraph(4,1,records);

    }
    else if(sortBy == 4 && sortOrder ==2){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getTotConfirmedCases() > r2.getTotConfirmedCases(); //descending
        });
        printGraph(4,2,records);

    }

    //sorting by 5 = total deaths
    else if(sortBy == 5 && sortOrder ==1){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getTotDeaths() < r2.getTotDeaths(); //ascending
        });
        printGraph(5,1,records);

    }
    else if(sortBy == 5 && sortOrder ==2){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getTotDeaths() > r2.getTotDeaths(); //descending
        });
        printGraph(5,2,records);

    }

    //sorting by 6 = total recovered cases
    else if(sortBy == 6 && sortOrder ==1){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getTotRecoveredCases() < r2.getTotRecoveredCases(); //ascending
        });
        printGraph(6,1,records);

    }
    else if(sortBy == 6 && sortOrder ==2){
        sort(records.begin(), records.end(), [](CountryRecord &r1, CountryRecord &r2)
        {
            return r1.getTotRecoveredCases() > r2.getTotRecoveredCases(); //descending
        });
        printGraph(6,2,records);


    }


    recordFile.close();

}
