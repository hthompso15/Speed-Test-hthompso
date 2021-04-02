#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int size;
    // Get command line input
    if (argc > 1) {
        size = stoi(argv[1]);
    } else {
        size = 10000;
    }
    cout << "Looking for size: " << size << endl;

    vector<long> cVec;
    
    ifstream fIn;
    fIn.open("numbers.txt");

    for (int i = 0; i < size; i++) {
        int num;
        fIn >> num;
        cVec.push_back(num);
        
    }

    cout << "Vector size: " << cVec.size() << endl;

    // Fix Bubble sort the vector
    bool swapped = true;
    int maxIndex = cVec.size()-1;
    while (swapped) {
        swapped = false;
        for(int i; i < maxIndex; i++) {
            if (cVec[i+1] < cVec[i]) {
                int temp = cVec[i];
                cVec[i] = cVec[i+1];
                cVec[i+1] = temp;
                swapped = true;
            }
        }
        maxIndex -= 1;
    }

    // TODO: Print the first and last ten numbers from the vector to the console

    cout << "First 10 Numbers from Vector:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << cVec[i] << endl;
    }

    cout << "Last 10 Numbers from Vector:" << endl;

    for (int i = cVec.size(); i == -10; i--) {
        cout << cVec[i] << endl;
    }   

    return 0;

}


 








