//
// Created by H460351 on 2/8/2024.
//
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

 map<char, int> getCharFrequency(ifstream &file){
    map<char, int> freqMap;
    cout << "Getting char frequency from file...\n";
    while(file){
        char currentChar = (char) file.get();
        auto iterator = freqMap.find(currentChar);
        if(iterator == freqMap.end()) { // Char doesn't exist in map, then add it
            freqMap.emplace(currentChar, 1);
        }else { // Char is already in map
            iterator->second++;
        }
    }
    return freqMap;
}

ifstream openFile(const string& fileName){
     ifstream file;
     file.open(fileName);
     if(!file.is_open()) throw invalid_argument("Unable to read file");
     return file;
 }

int main(int argc, char *argv[]){
     string fileName;
     if(argc > 1) fileName = argv[1]; // Receive file path as first argument
     ifstream fileStream = openFile(fileName);
     map<char, int> frequency = getCharFrequency(fileStream);
     cout << "Total occurrences of X: " << frequency.find('X')->second << "\n" << "Total occurrences of t: " << frequency.find('t')->second << "\n";
     cout << "Finished processing file\n";
}