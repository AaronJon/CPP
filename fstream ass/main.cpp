#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    char char1, char2;
    string comp1, comp2, comp3, comp4;
    int vol1, vol2, vol3, vol4;
    double price1, price2, price3, price4;

    ofstream ofs("file1.txt");
    ifstream ifs("file1sol.txt");

    // ifs >> comp1;

    ifs >> comp1 >> price1 >> vol1 >> char1;
    ifs >> comp2 >> price2 >> vol2 >> char2;
    ifs >> comp3 >> price3 >> vol3 >> char1;
    ifs >> comp4 >> price4 >> vol4 >> char2;

    
    ofs << comp1 << "," << comp2 << "," << comp3 << "," << comp4 << endl;

    cout << "ave is" << comp1 << comp2;


}