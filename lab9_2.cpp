#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


char findGrade(double x){
	if(x > 90){
		x = 'A';
	}else if (x > 75){
		x = 'B';
		}else if (x > 60){
			x = 'C';
			}else if (x > 45){
				x = 'D';
				}else{
					x = 'F';
	}
	return x;
}

int main(){
	
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();

		string Name;
		getline(cin,Name);
		name[i] = Name ;

		cout << "Score of student " << i+1 << ": ";

		double Score;
		cin >> Score;
		score[i] = Score;

		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
