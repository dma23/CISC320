#include <iostream>
#include <string>
#include <vector>
#include <time.h>

#include "insultgenerator_xxxxx.h"

using namespace std;

void InsultGenerator::initialize() { 
    
    string c1,c2,c3;
    string fileName = "InsultsSource.txt";
    ifstream insults(fileName);
    // checks to see if file is open
    if(insults.is_open()) { 

        while(insults >> c1 >> c2 >> c3) { 
            c1_words.push_back(c1);
            c2_words.push_back(c2);
            c3_words.push_back(c3);
                    
        } // end while loop
    } // end if statement
}

string InsultGenerator::talkToMe() { 
    // talkToMe() returns a single insult, generated at random.
        vector<string> phrase = generate(1);
        return phrase[0];
} // end talktome

vector<string> InsultGenerator::generate(int x) { 
    vector<string> phrases;
    string w1, w2, w3, sentence;
    for(int i = 0; i < x; i++) { 
        w1 = c1_words[rand() % c1_words.size()];
        w2 = c2_words[rand() % c2_words.size()]; 
        w3 = c3_words[rand() % c3_words.size()];
        sentence = ("Thou "+ w1 + " " + w2 + " " + w3 + "!" );
        phrases.push_back(sentence);

    } // end for loop
    return phrases;
} // end generate 

void InsultGenerator::generateAndSave(string file, int num) { 
    // generateAndSave() generates the requested number of unique insults and saves them to the filename
    ofstream outFile(file, ios::app); 
    if (num <= 10000) { 
    vector<string>insults = generate(num);
        
    sort(insults.begin(), insults.end());
    if(!outFile.fail()) { 
        for(int i = 0; i < num; i++) { 
            outFile << insults[i] << endl;
            } // end for loop
        } // end if statement
    } // end if/exception check
    else { 
        printf("Number of outputs exceeds limit");
    }

} // end generateandsave


/*
FileException::FileException(const string& message) : message(message) {}
NumInsultsOutOfBounds::NumInsultsOutOfBounds(const string& message) : message(message) {}

string& FileException::what() {
    return message; 
}

string& NumInsultsOutOfBounds::what() { 
    return message;
}
*/
