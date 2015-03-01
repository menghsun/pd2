#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const int size = 8;
	int init_array[size] = {64, 24, 13, 9, 7, 23, 34, 47};
	vector<int> v(size);
	int insert, moveItem;

	cout << "Unsorted array:\n";
	for(int i=0; i<size; ++i)
	{
		v.at(i) = init_array[i];
		cout << setw(4) << v.at(i);
	}
	cout << endl;

	cout << "Step-by-step:\n";
	for(int next=1;next<size;++next)
	{
		insert = v.at(next);
		moveItem = next;
		while((moveItem>0) && (v.at(moveItem-1) > insert))
		{
			v.at(moveItem) = v.at(moveItem-1);
			--moveItem;
		}
		v.at(moveItem) = insert;
		for(int i=0; i<size; ++i)
			cout << setw(4) << v.at(i);
		cout << endl;
	}
	
	return 0;
}
