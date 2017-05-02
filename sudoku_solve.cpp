#include <vector>
#include <iostream>
#include <fstream>
#include "Sudoku.h"
using namespace std;

bool solve(Sudoku question, 
		Sudoku & answer)
{
	int firstZero;
	firstZero = question.getFirstZeroIndex();
	if(firstZero == -1)
	{   // end condition
		if(question.isCorrect())
		{
			answer = question;
			return true;
		}
		else
			return false;
	}
	else
	{
		for(int num=1; num<=9; ++num)
		{
			question.setElement(
					firstZero, num);
			if(solve(question, answer))
				return true;
		}
		return false;
	}
} 
int main()
{
	Sudoku ques;
	Sudoku ans;
	int num;

	ifstream infile("su_question",ios::in);
	for(int i=0;i<81;++i)  // read in question
	{
		infile >> num;
		ques.setElement(i, num);
	}

	if(solve(ques, ans) == true)
	{
		cout << "Solvable!\n";
		for(int i=0; i<81; i++)
		{
			cout << ans.getElement(i) << " ";
			if(i%9==8)
				cout << endl;
		}
	}
	else
		cout << " Unsolvable!!\n";

}
