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
    ifstream ifs("ass1.txt"); // cin
    ofstream ofs("ass.txt");

    
    char char1, char2;
    string str1, str2, str3, str4;
    string heading = str1 + "," + str2 + "," + str3 + "," + str4;
    double price1, price2, price3, price4;
    double ave_price = (price1+price2+price3+price4)/4;

    int volume1, volume2, volume3, volume4 = 40;
    int sum_vols = (volume1+volume2+volume3+volume4);


    ifs >> str1 >> price1 >> volume1 >> char1;
    ifs >> str2 >> price2 >> volume2 >> char2;
    ifs >> str3 >> price3 >> volume3 >> char1;
    ifs >> str4 >> price4 >> volume4 >> char2;
    


    ofs << str1 << "," << str2 << "," << str3 << "," << str4 << endl;
    ofs << (price1+price2+price3+price4)/4 << endl;
    ofs << volume1+volume2+volume3+volume4;
    
    
    // ofs << str2 << price2 << volume2 << char2 << endl;
    // ofs << str3 << price3 << volume3 << char1 << endl;
    // ofs << heading << endl;
    // cout << ave_price << endl;
    // cout << sum_vols << endl;

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