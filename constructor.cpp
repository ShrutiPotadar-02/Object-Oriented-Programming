#include<bits/stdc++.h>
using namespace std;

// Constructor-It is a special type of method that is invoked each time so that an object of a class is creatd.
// Default constructor-It is automaticaly generated by a compiler.
// Rules to create a constructor
// 1. It should not have return type.
// 2. It should have same name as the class.
// 3. It should be public.

class Employee {
public:
	string Name;
	string Company;
	int Age;

	void IntroduceYourself()
	{
		cout << "Name -" << Name << endl;
		cout << "Company -" << Company << endl;
		cout << "Age -" << Age << endl;
	}


//constructor//
	Employee(string name, string company, int age)
	{
		Name = name;
		Company = company;
		Age = age;
	}

};

int main()
{
	Employee employee1 = Employee("Shruti", "Insta", 22);
	// employee1.Name = "Shruti";
	// // employee1.Company = "youtube";
	// employee1.Age = 22;
	employee1.IntroduceYourself();
	return 0;
}