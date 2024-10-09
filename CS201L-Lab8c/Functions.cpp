#include "Functions.h"
 
void readFile(ifstream& inFile, ofstream& err, vector<Instrument*>& instrumentList) {

    string inRec, token;
    vector<string> tokens;

    while (getline(inFile, inRec)) {
        stringstream inSS(inRec);
        tokens.clear();
        while (getline(inSS, token, ','))  
            tokens.push_back(token);
        
        try {

        }
        catch (const invalid_argument & e) {
            err << left << "Error: " << setw(28) << e.what() << " - " << inRec << endl;
            continue;
        }
        catch (...) {
            err << left << "Error: " << " - " << inRec << endl;
            continue;
        }
    }
      
}

char displayMenu() {
    char choice = '5';
    string temp;

    cout << "\nWelcome to the Instrument Database\n";

    while (choice != '1' && choice != '2' && choice != '3' && choice != '4') {
        cout << "Your choices are: \n";
        cout << "1. List All Instruments\n";
        cout << "2. Find Specific Instruments\n";
        cout << "3. List All Instruments for a Manufacturer\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice != '1' && choice != '2' && choice != '3' && choice != '4') {
            cout << "\nPlease enter a valid value!\n";
            getline(cin, temp);
        }
    }
    getline(cin, temp);
    return choice;
}


void listInstruments(ofstream& outFile, vector<Instrument*> instrumentList) {
    outFile << "\n\nINSTRUMENT LIST\n";
    outFile << setw(20) << left << "TYPE" << setw(20) << "NAME" << setw(20)
         << "MANUFACTURER" << setw(10) << "YEAR BUILT" << right << setw(10) << "COST" << endl;

    cout << "\n\nINSTRUMENT LIST\n";
    cout << setw(20) << left << "TYPE" << setw(20) << "NAME" << setw(20)
        << "MANUFACTURER" << setw(10) << "YEAR BUILT" << right << setw(10) << "COST" << endl;

    //add loop of instrumentList
}

void findInstruments(ofstream& outFile, ofstream& errFile, vector<Instrument*>  instrumentList) {

}

void listManufacturers(ofstream& outFile, ofstream& errFile, vector<Instrument*>  instrumentList){

}