#include "Base.h"
Base::Base() : name(""), age(0) {

}
Base::Base(int age, string name) {
	this->age = age;
	this->name = name;
}
void Base::print() const {
	cout << age << endl << name << endl;
}
bool Base::operator<(const Base& other)const {
	return name < other.name;
}
