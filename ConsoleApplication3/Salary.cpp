
#include <iostream>
#include <iomanip> //for formatting output
#include <fstream> //filestres helps us read and write from afile
#include <string>

using namespace std;

int main()
{
	//variables
	//to read from an input file we need an ifstream variable
	ifstream inFile; 
	string fname1, fname2, fname3, lname1, lname2, lname3;
	double currentPayRate1 = 0, percentPayIncrease1 = 0, updatedSalary1 = 0;
	double currentPayRate2 = 0, percentPayIncrease2 = 0, updatedSalary2 = 0;
	double currentPayRate3 = 0, percentPayIncrease3 = 0, updatedSalary3 = 0;
	//open file and read
	inFile.open("Ch3_ex6Data.txt");  // only need the name of the file
	//if not in origional project folder you have to put the acutal path to the file
	inFile >> fname1 >> lname1 >> currentPayRate1 >> percentPayIncrease1;
	inFile >> fname2 >> lname2 >> currentPayRate2 >> percentPayIncrease2;
	inFile >> fname3 >> lname3 >> currentPayRate3 >> percentPayIncrease3;
	//manipulate the data
	updatedSalary1 = currentPayRate1 + (currentPayRate1 * (percentPayIncrease1 / 100));
	updatedSalary2 = currentPayRate2 + (currentPayRate2 * (percentPayIncrease2 / 100));
	updatedSalary3 = currentPayRate3 + (currentPayRate3 * (percentPayIncrease3 / 100));
	//format and output to user
	cout << fixed << showpoint << setprecision(2);
	cout << fname1 << lname1 <<endl;
	cout << "This employee's updated salary is $" << updatedSalary1 << endl << endl;
	cout << fname2 << lname2 << endl;
	cout << "This employee's updated salary is $" << updatedSalary2 << endl << endl;
	cout << fname3 << lname3 << endl;
	cout << "This employee's updated salary is $" << updatedSalary3 << endl << endl;
	//close file
	inFile.close();

	return 0;
}