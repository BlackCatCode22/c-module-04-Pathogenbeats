// Andrew Powell 10/6/2024
// zooPractice.cpp
// Too be honest I do not know if I did this correctly? I kind of frankensteined it together
// Being held together with chatgpt, google, canvas links from class, youtube videos, tape and glue.

#include <iostream>
#include <fstream>
#include <string>
#include <vector> // Include vector header

using namespace std;

int main() {
    string myStr = "";
    vector <string> animalList;
    int myPause = 0;

    // Vector was recommended by chatgpt. I think it means to create a labeled container 
    // that can hold a list of animal names that changes size based on added or removed names?

    // Open a file for reading.
    ifstream myAnimalFile("C:/cStuff/midProgFiles/animalNames.txt");
    if (!myAnimalFile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;

        // Chat Gpt gave me this option to add an error message if it can not find animalNames.txt and I kind of like it.
    }

    /* Read the file one line at a time.
    * I was trying this code that was suggested by chatgpt but, it kept creating lines that were blank so you had to enter 1 twice to get to the next line:
     
     *while (getline(myAnimalFile, myStr) && myPause < 2) {
        cout << myStr;
        cout << "\n Enter 1 for next line, 2 to stop: ";
        cin >> myPause;

        */ 
        //int myPause allows you to enter 1 for next line or 2 to stop
    
        // I kept messing with the code and watching videos until I got to this point

    while (myPause < 2) {
        if (getline(myAnimalFile, myStr)) {
           
            if (myStr.empty()) {
                continue; 
                // Go to the next line if next one is empty (thanks google!)
            }
            cout << "\n" << myStr << "\n";
            // Print the line if it's not empty
        }
        else {
            break; 
            // I kept having issues with it not going ot the end of the while loop and chatgpt recommended this
        }

        cout << "\n Enter 1 for next line, 2 to stop: ";
        cin >> myPause;
    }

    cout << "\n\n *********** end of while loop reading file a line at a time **********\n\n";

    // Return to top of file
    myAnimalFile.clear();
    myAnimalFile.seekg(0);

    // Prove that clear() and seekg(0) worked.
    getline(myAnimalFile, myStr);
    cout << myStr;

    // Count the number of lines in the file and store them in the vector
    while (getline(myAnimalFile, myStr)) {
        animalList.push_back(myStr);
        
        // Append each line to the vector (this was a suggestion by chatgpt i think)
    }
    myAnimalFile.close(); // Close the file

    cout << "\n  There are " << animalList.size() << " lines in the file!";

    // Let's see how our animal names look in the vector
    cout << "\n********* The Animal Name File Vector *********\n";
    for (size_t i = 0; i < animalList.size(); i++) {
        cout << endl << animalList[i]; // Print each animal name
    }

    cout << "\n\n\n";

    // Example to find the Hyena names
    string speciesName = "Hyena";
    // Create a variable for Hyena
    if (!animalList.empty()) {
        // ! means not so this is saying if the animalList is not empty to run the code I think

        int firstSpace = animalList[0].find(" ");
        // Hyena is the first name in the txt file so animalList[0].find looks at the first name. firstSpace was reccomended by visual studio,
        // but, I think its just creating a variable named firstSpace to store the name it finds

        cout << "\n the first space is at ..." << firstSpace;

        string arrayElementFirstWord = animalList[0].substr(0, 5);
        // I think this code creates another variable to take line 0 and the subset of letters between positions 0 and 5 to be stored in the new string.

        cout << "\n arrayElementFirstWord = " << arrayElementFirstWord;

        if (speciesName == arrayElementFirstWord) {
            cout << "\n strings are equal!";
        }
        else {
            cout << "\n strings are NOT equal!";
        }
    }

    return 0;
}
