#include "../headers/GeomVector.h"
#include "../headers/TxtGeneration.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
TxtGeneration::TxtGeneration(){}
TxtGeneration TxtGeneration::t;
TxtGeneration & TxtGeneration::getObj(){return t;}
void TxtGeneration::txtGenerator(GeomVector& a, string str) const
{
    string userInput = "";
    userInput += to_string(a.mStartGetter().x()) + " " + to_string(a.mStartGetter().y()) + " " + to_string(a.mStartGetter().z()) + " " + to_string(a.mEndGetter().x()) + " " + to_string(a.mEndGetter().y()) + " " + to_string(a.mEndGetter().z()) + "\n";
    std::ofstream outputFile;
    outputFile.open(str);
    if (outputFile.is_open()) {
        outputFile << userInput;
        outputFile.close();
        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }
}