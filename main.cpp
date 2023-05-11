#include <iostream> //read from Terminals
#include <fstream>  //read from files

using namespace std;

int main()
{

  // concatinate symbols >> GOOG,NFLX etc
  // average of all prices
  // sum of all volumes

  // ofstream ofs; //cout
  // ifstream ifs("inputfile.txt"); // cin
  ofstream filer("outputfile.txt");

  // int age;
  // char char1;
  // ifs >> age;
  // ifs >> char1;
  filer << "New file innit";
  
  

  return 0;

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