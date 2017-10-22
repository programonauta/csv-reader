//
// Header file of csv-reader library
//
// Define CSV-HEADER_H to inform compiler if header is already included
// Pay attention on the #endif on the end of file
#ifndef CSV_READER_H
#define CSV_READER_H
//

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

//
// Function to parse a CSV file using Finite Automaton
// return 1 if found a valid CSV line
// return 0 if the line is invalid
// Return the fields in the vector v
//
int getCSVLine(ifstream &inCSVFile, vector<string> &v);

#endif
