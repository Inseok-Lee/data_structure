#include <iostream>
using namespace std;
#include "UnsortedType.h"

template <class ItemType>
void MergeLists(UnsortedType<ItemType>& l_a, UnsortedType<ItemType>& l_b, UnsortedType<ItemType>& result) {

	l_a.ResetList();
	ItemType temp_item;
	int length = 0;
	// PPT ó�� �����ϱ� ���ؼ� �ӽ� Unsorted Type�� �ְ� ������
	while (l_a.LengthIs() != length) {

		l_a.GetNextItem(temp_item);
		result.InsertItem(temp_item);
		length++;
	}

	l_b.ResetList();
	length = 0;
	while (l_b.LengthIs() != length) {

		l_b.GetNextItem(temp_item);
		result.InsertItem(temp_item);
		length++;
	}
	
}

int main() {

	UnsortedType<int> us_list_1;
	UnsortedType<int> us_list_2;
	UnsortedType<int> result;
	
	us_list_1.InsertItem(1);
	us_list_1.InsertItem(3);
	us_list_1.InsertItem(5);
	us_list_1.InsertItem(7);
	us_list_1.InsertItem(9);

	us_list_2.InsertItem(2);
	us_list_2.InsertItem(4);
	us_list_2.InsertItem(6);
	us_list_2.InsertItem(8);
	us_list_2.InsertItem(10);

	//MergeLists(s_list_1, s_list_2, result);
	MergeLists(us_list_1, us_list_2, result);


	int item;
	result.ResetList();
	int length = 0;
	while (length != result.LengthIs()) {

		result.GetNextItem(item);
		cout << item << endl;
		length++;
	}

	




}