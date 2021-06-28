#include <iostream>
#include "BasePrinter.h"

BasePrinter::BasePrinter() {
	modelName = "\0";
	madeIn = "\0";
	papers = 0;
}
BasePrinter::BasePrinter(const string& _modelName, const string& _madeIn, int _papers) {
	modelName = _modelName;
	madeIn = _madeIn;
	papers = _papers;
}
BasePrinter::~BasePrinter() {
}
string BasePrinter::getmodelName() {
	return modelName;
}
void BasePrinter::setmodelName(const string& _name) {
	modelName = _name;
}
string BasePrinter::getmadeIn() {
	return madeIn;
}
void BasePrinter::setmadeIn(const string& _name) {
	madeIn = _name;
}
int BasePrinter::getpapers() {
	return papers;
}
void BasePrinter::setpapers(int _papers) {
	papers = _papers;
}