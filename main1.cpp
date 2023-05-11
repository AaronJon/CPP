#include <iostream> //read from Terminals
#include <fstream>  //read from files
#include <string>

using namespace std;

int main()
{

    // concatinate symbols >> GOOG,NFLX etc
    // average of all prices
    // sum of all volumes

    // ofstream ofs; //cout
    // ifstream ifs("inputfile.txt"); // cin
    ofstream xchange("ass.txt");

    string sym1 = "GOOG";
    string sym2 = "NFLX";
    string sym3 = "AMZN";
    string sym4 = "APPL";
    string header = sym1 + "," + sym2 + "," + sym3 + "," + sym4;
    // char char1 = "b";
    // char char2 = "s";
    double price1 = 9.5;
    double price2 = 69.5;
    double price3 = 95;
    double price4 = 9.45;
    double ave_price = (price1+price2+price3+price4)/4;

    int volume1 = 560;
    int volume2 = 5450;
    int volume3 = 350;
    int volume4 = 40;
    int sum_vols = (volume1+volume2+volume3+volume4);
   
    xchange << header << endl;
    xchange << "Average Prices " << ave_price << endl;
    xchange << "Sum of all Volumes " << sum_vols << endl;

    // return 0;

    // char name;
    // int age;

    // cin >> name >> age;
    // cout << "He is called " << name <<  " and hes " << age;

    // int males;
    // int female;

    // cout<< "how many females? ";
    // cin >> female;
    // cout<< "how many males? ";
    // cin >> males;
    // int total = female * males;
    // cout << "their total is " << total;
}