#include "QueType.h"
#include <iostream>
using namespace std;

int main() {
	int item;
	int result;
	int newitem = 10;
	QueType que;
	que.Enqueue(5);
	que.Enqueue(4);
	que.Enqueue(2);
	que.Enqueue(3);
	que.Enqueue(1);
	que.Enqueue(8);


	que.MinDequeue(item);
	cout << "Queue�� ���� ���� �� : "<<item << endl;
	cout << endl;
	que.MinEnqueue(newitem);
	cout << endl;




}