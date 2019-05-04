#include "Queue.h"
#include <iostream>

using namespace  std;
/*Демонстраци работы класса queue*/
int main() {
	queue<int> q;

	cout << q.size() << endl;

	q.push(1);
	q.push(2);
	q.push(3);

	cout << q.size() << endl;


	cout << q.pop() << " ";
	cout << q.pop() << " ";
	cout << q.pop() << " ";

	cout << endl;

	cout << q.size() << endl;

	q.push(4);
	q.push(5);
	q.push(6);

	cout << q.size() << endl;

	cout << "first element " << q.front() << endl;
	cout << "last element " << q.back() << endl;


	cout << q.size() << endl;
	
	queue<int> w(q);

	w.pop();

	cout << w.size() << endl;

	cout << q.size() << endl;

	queue<queue<int>> d;
	d.push(q); 

	const queue<int> f(8);

	cout << f.size();

	system("pause");
	return 0;
}