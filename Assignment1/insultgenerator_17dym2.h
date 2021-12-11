//Insultgenerator header file 
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;
    
    vector<string> c1_words;
    vector<string> c2_words;
    vector<string> c3_words;

class InsultGenerator{ 
    public:
        void initialize();
        string talkToMe();
        vector<string>generate(int x);
        void generateAndSave(string file, int num);
};

class FileException {
    public:
        //FileException(const string& message);
        string what() { 
            return "File Error";
        }
};

class NumInsultsOutOfBounds { 
    public:
        //NumInsultsOutOfBounds(const string& message);
        string what() { 
            return "Out of Bounds Error";
        }
};