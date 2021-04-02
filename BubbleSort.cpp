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

    bool swapp = true;
        while(swapp) {
            swapp = false;
            for (int i = 0; i < cVec.size()-1; i++) {
                if (cVec[i] > cVec[i+1] ){
                    cVec[i] += cVec[i+1];
                    cVec[i+1] = cVec[i] - cVec[i+1];
                    cVec[i] -= cVec[i+1];
                    swapp = true;
            }
        }
    }

    cout << "First 10 Numbers from Vector:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << cVec[i] << endl;
    }

    cout << "Last 10 Numbers from Vector:" << endl;

    for (int i = 1; i < 11; i++) {
        int size = cVec.size();
        cout << cVec[size - i] << endl;
    }   

    return 0;

}


 








