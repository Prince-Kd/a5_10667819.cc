#include <iostream>
#include<fstream>
#include<string>

using namespace std;
struct studentType
    {
        int ID,age;
        string name,gender;
        char grade;
        double score;
    };

int main()
{

    studentType student[6];
    ofstream file("myfile.txt", ios::app);
    file<<"   IDNumber      Name            Age   Gender  Score   Grade"<<endl;
    file<<"**********************************************************************"<<endl;
    for(int i=1; i<=5; i++)
    {
        ofstream file("myfile.txt", ios::app);
        file<<i<<"  ";
        cin>>student[i].ID;
        file<<student[i].ID<<"      ";
        cin>>student[i].name;
        file<<student[i].name<<"            ";
        cin>>student[i].age;
        file<<student[i].age<<"     ";
        cin>>student[i].gender;
        file<<student[i].gender<<"      ";
        cin>>student[i].score;
        file<<student[i].score<<"     ";
        cin>>student[i].grade;
        file<<student[i].grade;
        file<<endl;
    }
    file<<"**********************************************************************"<<endl;
   int averAge,averScore,toTalmale,toTalfemale;
   averAge=(student[1].age+student[2].age+student[3].age+student[4].age+student[5].age)/5;
   file<<"Average Age: "<<averAge;
   file<<endl;
   averScore=(student[1].score+student[2].score+student[3].score+student[4].score+student[5].score)/5;
   file<<"Average Score: "<<averScore;
}
