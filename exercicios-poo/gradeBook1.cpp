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
	string courseName = "Nenhum";
};


int main() {

	string nameOfCourse; // string de carcteres para armazenar o nome do curso
	GradeBook myGradeBook; //cria um objeto GradeBook chamado myGradeBook

	//exibe valor inicial de courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;


	// solicita, insire e configura o nome do curso
	cout << "\nPlease enter the course name: " << endl;
	getline(cin, nameOfCourse); // lê o nome do curso com espaços em branco
	myGradeBook.setCourseName(nameOfCourse); // configura o nome do curso(seta)

	cout << endl; // gera uma linha em branco
	myGradeBook.displayMessage(); // exibe amensagem com o novo nome do curso
	_getch(); // previne o programa de fechar
	return 0;
}
