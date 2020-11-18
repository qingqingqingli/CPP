#include <string>
#include <iostream>

class Student
{
	private:
		std::string _login;

	public:
		Student(std::string login) :_login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
	Student		bob = Student("bfubar");
	Student*	jim = new Student("jfubar");

	// Do some stuff here

	delete jim; // jim is destroyed

	return (0); // bob is destroyed
}
