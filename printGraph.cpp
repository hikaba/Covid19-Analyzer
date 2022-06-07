// Name: Hiba Kaawan
// Student Number: 250921401
// CS3307 Assignment 1
// /**
//  * Class that represents a graph, takes in sort by method and the order to which to sort it by given a vector, and prints the corresponding graph for it
//  *
//  */
#include "printGraph.h"

using namespace std;
//Constructor
void printGraph(int sortBy, int order, vector<CountryRecord> list){
    int highestNum;
    int num;
    int numb2;

//1 new confirmed cases
    if (sortBy == 1 && order == 1){
        highestNum = list.at(9).getNewConfirmedCases();
    }
    else if(sortBy == 1 && order == 2){
        highestNum = list.at(0).getNewConfirmedCases();
    }
//2 new deaths
    else if (sortBy == 2 && order == 1){
        highestNum = list.at(9).getNewDeaths();
    }
    else if(sortBy == 2 && order == 2){
        highestNum = list.at(0).getNewDeaths();
    }
//3 new recoved cases
    else if (sortBy == 3 && order == 1){
        highestNum = list.at(9).getNewRecoveredCases();
    }
    else if(sortBy == 3 && order == 2){
        highestNum = list.at(0).getNewRecoveredCases();
    }
//4 total confirmed cases
    else if (sortBy == 4 && order == 1){
        highestNum = list.at(9).getTotConfirmedCases();
    }
    else if(sortBy == 4 && order == 2){
        highestNum = list.at(0).getTotConfirmedCases();
    }
//5 total deaths
    else if (sortBy == 5 && order == 1){
        highestNum = list.at(9).getTotDeaths();
    }
    else if(sortBy == 5 && order == 2){
        highestNum = list.at(0).getTotDeaths();
    }
//6 total recovered cases
    else if (sortBy == 5 && order == 1){
        highestNum = list.at(9).getTotRecoveredCases();
    }
    else if (sortBy == 6 && order == 1) {
        highestNum = list.at(9).getTotRecoveredCases();
    }
    else{
        highestNum = list.at(0).getTotRecoveredCases();


    }
//determines highest number
if (highestNum >= 60){
    num = highestNum/60;
    }
    else if (highestNum == 0)
    {
        num = 1;
    }
    else
    {
        num = highestNum%60;
    }

//1 new confirmed cases
    if (sortBy == 1){
        for(int j = 0; j < 10; j++){
            cout<< list.at(j).getCode() << " | ";
            numb2 = list.at(j).getNewConfirmedCases()/num;
            cout<< string(numb2, '#') << endl;
        }
        cout<< string(65, '-') << endl;

        cout<< "New Confirmed Cases; Each # is approx. " << num << " cases"<<endl;

    }
    // else if(sortBy == 1 && order == 2){
    //     highestNum = list.at(0).getNewConfirmedCases();
    // }
//2 new deaths
    else if (sortBy == 2){
        for(int j = 0; j < 10; j++){
            cout<< list.at(j).getCode() << " | ";
            numb2 = list.at(j).getNewDeaths()/num;
            cout<< string(numb2, '#') << endl;
        }
        cout<< string(65, '-') << endl;


        cout<< "New Deaths; Each # is approx. " << num << " deaths";
    }
    // else if(sortBy == 2 && order == 2){
    //     highestNum = list.at(0).getNewDeaths();
    // }
//3 new recoved cases
    else if (sortBy == 3){
        for(int j = 0; j < 10; j++){
            cout<< list.at(j).getCode() << " | ";
            numb2 = list.at(j).getNewRecoveredCases()/num;
            cout<< string(numb2, '#') << endl;
        }
        cout<< string(65, '-') << endl;


        cout<< "New Recovered Cases; Each # is approx. " << num << " cases";
    }
    // else if(sortBy == 3 && order == 2){
    //     highestNum = list.at(0).getNewRecoveredCases();
    // }
//4 total confirmed cases
    else if (sortBy == 4){
        for(int j = 0; j < 10; j++){
            cout<< list.at(j).getCode() << " | ";
            numb2 = list.at(j).getTotConfirmedCases()/num;
            cout<< string(numb2, '#') << endl;
        }
         cout<< string(65, '-') << endl;


        cout<< "Total Confirmed Cases; Each # is approx. " << num << " cases";
    }
    // else if(sortBy == 4 && order == 2){
    //     highestNum = list.at(0).getTotConfirmedCases();
    // }
//5 total deaths
    else if (sortBy == 5){
        for(int j = 0; j < 10; j++){
            cout<< list.at(j).getCode() << " | ";
            numb2 = list.at(j).getTotDeaths()/num;
            cout<< string(numb2, '#') << endl;
        }
        cout<< string(65, '-') << endl;


        cout<< "Total Deaths; Each # is approx. " << num << " deaths";
    }
    // else if(sortBy == 5 && order == 2){
    //     highestNum = list.at(0).getTotDeaths();
    // }
//6 total recovered cases
    else {
        for(int j = 0; j < 10; j++){
            cout<< list.at(j).getCode() << " | ";
            numb2 = list.at(j).getTotRecoveredCases()/num;
            cout<< string(numb2, '#') << endl;
        }
        cout<< string(65, '-') << endl;

        cout<< "Total Recovered Cases; Each # is approx. " << num << " cases";
    }

}
