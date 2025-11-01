#include<iostream>
#include<string>
using namespace std;
class Student{
private:
	string name, roll_no;
	int age;
	double gpa;
public:
	void setName(string n){
		name = n;
	}
	void setRoll_no(string r){
		roll_no = r;
	}
	void setAge(int a){
		if (a > 0 && a < 100){
			age = a;
		}
		else
		{
			cout << " you entered invalid age so by default age is:";
			age = 18;
		}
	}
	void setGpa(double g){
		if (g>0.0 && g < 4.0){
			gpa = g;
		}
		else{
			cout << " you entered invalid gpa so by default gpa is:";
			gpa = 2.0;
		}
	}

	string getName(){
		return name;
	}

	string getRoll_no(){
		return roll_no;
	}

    int getAge(){
		return age;
	}

	double getGpa(){
		return gpa;
	}
	void display(){
		cout << "_______________________" << endl;
		cout << "Name: " << name <<endl;
		cout << "Roll no: " << roll_no << endl;
		cout << "Age: " << age << endl;
		cout << "GPA: " << gpa << endl;
		
		}

	void CalculateGpa(){
		if (gpa == 4.0)
		{
			cout << "your Grade is: A"<< endl;
		}
		else if (gpa >=3.6)
		{
			cout << "your Grade is: A-" << endl;
		}
		else if (gpa >= 3.0)
		{
			cout << "your Grade is: B" << endl;
		}
		else if (gpa >= 2.5)
		{
			cout << "your Grade is: C" << endl;
		}
		else if (gpa >= 2.0)
		{
			cout << "your Grade is: D" << endl;
		}
		else
		
			cout << "your Grade is: F" << endl;
		
	}
	Student(string n="unknown", string r="unknown", int a=18, double g=2.0){
		name = n;
		roll_no = r;
		age = a;
		gpa = g;
	}
	~Student(){
		cout << "Memory released successfully.";
	}
};
int main()
{
	Student s1;
	s1.display();
	s1.CalculateGpa();
	Student s2("Abubakar", "L1F24BSSC0023", 19, 3.53);
	s2.display();
	s2.CalculateGpa(); 
	Student s3("chatur", "L1f");
	s3.display();
	s3.CalculateGpa();

	system("pause");
	return 0;
}