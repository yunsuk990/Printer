#include <iostream>
#include "BasePrinter.h"
#include "LaserPrinter.h"

LaserPrinter::LaserPrinter() {
	toner = 0;
}
LaserPrinter::LaserPrinter(const string& _modelName, const string& _madeIn, int _papers, int _toner)
	:BasePrinter(_modelName, _madeIn, _papers)
{
	toner = _toner;
}
LaserPrinter::~LaserPrinter() {

}
int LaserPrinter::gettoner() {
	return toner;
}
void LaserPrinter::settoner(int _toner) {
	toner = _toner;
}
void LaserPrinter::Print(int pages) {
	if (pages > papers) {
		cout << "용지가 부족하여 출력할 수 없습니다" << endl;
		return;
	}
	if (pages > toner) {
		cout << "토너가 부족하여 프린트할 수 없습니다" << endl;
		return;
	}
	cout << "프린트하였습니다" << endl;
	papers -= pages;
	toner -= pages;
}
void LaserPrinter::Show() {
	cout << modelName << "," << madeIn << "," << "남은종이 " << papers << "장," << "남은 토너 " << toner << endl;
}