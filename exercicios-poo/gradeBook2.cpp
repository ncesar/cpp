#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

#include <string> // utilizando classe de string padrão c++
using std::string;
using std::getline;

// definição da classe GradeBook
class GradeBook {
public:
	// o construtor inicializa courseName com a string fornecida como argumento
	GradeBook(string name) {
		setCourseName(name);// chama a função set para inicializar courseName
	}// fim do construtor GradeBook

	//~função que configura o nome do curso
	void setCourseName(string name) {
		courseName = name; // armazena o nome do curso no objeto
	}

	// função que obtem o nome do curso
	string getCourseName() {
		return courseName; //retorna o coursename
	}

	//função que exibe uma mensagem de boas vindas
	void displayMessage() {
		// essa instrução chama getCourseName para obter o
		// nome do curso que esse GradeBook representa
		cout << "Welcome to grade book for \n" << getCourseName() << "!" << endl;
	}
private:
	string courseName;
};


int main() {
	GradeBook gradeBook1("Introdução em C++");
	GradeBook gradeBook2("CS102 Data Structures in C++");



	// exibe o valor inicial de courseName para cada GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;

	_getch(); // previne o programa de fechar
	return 0;
}
