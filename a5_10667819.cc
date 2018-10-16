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
    int averAge,averScore,totalMale = 0,totalFemale = 0;

    studentType student[6];
    ofstream file("myfile.txt", ios::app);
    cout<<"Enter the following details for 5 students"<<endl;
    cout<<"IDNumber ,Name ,Age ,Gender ,Score ,Grade"<<endl;
    file<<"   IDNumber      Name           Age    Gender     Score   Grade"<<endl;
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
		cin >> student[i].score;
		file<<student[i].score<<"     ";
    //for grade
		if (student[i].score <= 100 && student[i].score >= 80)
		{
			student[i].grade = 'A';
			file<<student[i].grade;
		}
		else if (student[i].score <= 79 && student[i].score >=70)
		{
			student[i].grade = 'B';
			file<<student[i].grade;
		}
		else if (student[i].score <= 69 && student[i].score >= 60)
		{
			student[i].grade = 'C';
			file<<student[i].grade;
		}
		else if (student[i].score <= 59 && student[i].score >=50)
		{
			student[i].grade = 'D';
			file<<student[i].grade;
		}
		else if (student[i].score <= 49 && student[i].score >=40)
		{
			student[i].grade = 'E';
			file<<student[i].grade;
		}
		else
		{
			student[i].grade = 'F';
			file<<student[i].grade;
		}
        file<<endl;

        if(student[i].gender == "Male")//condition for number of males or females
        {
            totalMale += 1;
        }
        else
        {
            totalFemale += 1;
        }
    }
    file<<"**********************************************************************"<<endl;


   averAge=(student[1].age+student[2].age+student[3].age+student[4].age+student[5].age)/5;
   file<<"Average Age: "<<averAge<<endl;//prints average age of  students

   averScore=(student[1].score+student[2].score+student[3].score+student[4].score+student[5].score)/5;
   file<<"Average Score: "<<averScore<<endl;//prints average score of  students

   file<<"Male count: "<<totalMale<<endl;// prints number of males
   file<<"Female count: "<<totalFemale<<endl;//prints number of females

   return 0;


}
