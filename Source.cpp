#include"Base.h"

int main() {

	set<int> Numbers;

	Numbers.insert(10);
	Numbers.insert(10);
	Numbers.insert(20);
	Numbers.insert(30);
	Numbers.insert(40);
	Numbers.insert(50);

	set<int>::iterator it = Numbers.begin();

	for (it; it != Numbers.end(); it++) {
		cout << *it << endl;
	}

	int NumbertoFind;
	cin >> NumbertoFind;

	set<int>::iterator itfind = Numbers.find(NumbertoFind);

	if (itfind != Numbers.end()) {

		cout << *itfind << endl;
	}
	else {

		cout << "not found" << endl;
	}

	set<Base> Bases;
	Bases.insert(Base(20, "A"));
	Bases.insert(Base(20, "B"));
	Bases.insert(Base(20, "C"));
	Bases.insert(Base(20, "D"));
	Bases.insert(Base(20, "A"));

	set<Base>::iterator itbase = Bases.begin();

	for (itbase; itbase != Bases.end(); itbase++) {

		itbase->print();
	}
	return 0;
}