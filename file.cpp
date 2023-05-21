#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream ifs("file.txt");
    ofstream ofs("file1.txt");


    double mean, median, mode;
    string name1, name2, name3;
    int mathsScore, mathsScore2, mathsScore3, englishScore, englishScore2, englishScore3, 
                    programmingScore, programmingScore2, programmingScore3;

          

    ifs >> name1 >> mathsScore >> englishScore >> programmingScore;
    ifs >> name2 >> mathsScore2 >> englishScore2 >> programmingScore2;
    ifs >> name3 >> mathsScore3 >> englishScore3 >> programmingScore3;

     double average_maths_scores = int((mathsScore + mathsScore2 + mathsScore3)/3);
     double average_eng_scores = int((englishScore + englishScore2 + englishScore3)/3);
     double average_prog_scores = int((programmingScore + programmingScore2 + programmingScore3)/3);
    //  int mode =    ;   
    ofs << "Name"<< " " << "maths" << " " << "english" << " " << "programming" << endl;
    ofs << name1 << " " << mathsScore << " " << englishScore << " " << programmingScore << endl;
    ofs << name2 << " " << mathsScore2 << " " << englishScore2 << " " << programmingScore2 << endl;
    ofs << name3 << " " << mathsScore3 << " " << englishScore3 << " " << programmingScore3 << endl;

    ofs << endl;
    ofs << "Averages"<< endl;
    ofs << "Maths Average " << average_maths_scores << endl;
    ofs << "English Average " << average_eng_scores << endl;
    ofs << "Programming Average " << average_prog_scores << endl;

    if ()



}