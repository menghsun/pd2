#include <vector>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "Sudoku.h"
using namespace std;
int main()
{
	int sudoku_in[Sudoku::sudokuSize];
	Sudoku su_tmp;
	vector<Sudoku> su;
	ifstream in("su_infile",ios::in);
	int num_element, num_case;
	in >> num_case; // num_case is not used in this program
	cout << "size = " << 
		su.size() << endl;
	num_element = 0;
	while(in >> sudoku_in[num_element++])
	{                      // read in map
		if(num_element >= Sudoku::sudokuSize) {
			su_tmp.setMap(sudoku_in);
			num_element = 0;
			su.push_back(su_tmp);
		}
	}
	cout << "size = " << su.size() << endl;
	cout << su[0].isCorrect() << endl;
	for(int i = 1; i<su.size(); ++i)
		cout << su.at(i).isCorrect() << endl;

	return 0;
}
