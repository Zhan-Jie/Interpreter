#include "interpreter.h"

using namespace std;

int main(){
	Statement statement;
	cout << "The program processes statements of the following format:\n"
		<< "\t<id> = <expr>;\n\tPRINT <id>\n\tSTATUS \n\tEND\n\n";
	while (true){
		statement.getStatement();
	}
	return 0;
}