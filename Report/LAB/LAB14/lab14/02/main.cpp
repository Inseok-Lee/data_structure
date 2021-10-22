#include <iostream>
#include "Student.h"
#include "MergeSort.h"

using namespace std;

int main() {

	Student stu[100];
	stu[0].InitValue(2003200111, (char*) "�̿���", 3.0);
	stu[1].InitValue(2004200121, (char*) "�ǿ���", 3.2);
	stu[2].InitValue(2005200132, (char*) "������", 2.7);
	stu[3].InitValue(2006200132, (char*) "�ڱԹ�", 4.0);
	stu[4].InitValue(2006200133, (char*) "�ڹ�", 4.0);
	stu[5].InitValue(2006200139, (char*) "�ڼ�", 4.0);

	MergeSort(stu, 0, 5);
	Print(cout, stu, 6);
	

	return 0;

}