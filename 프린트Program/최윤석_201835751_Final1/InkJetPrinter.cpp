#include <iostream>
#include "BasePrinter.h"
#include "InkJetPrinter.h"


InkJetPrinter::InkJetPrinter() 
	:BasePrinter()
{
	inkleft = 0;
}
InkJetPrinter::InkJetPrinter(const string& _modelName, const string& _madeIn, int _papers, int _inkleft)
	:BasePrinter(_modelName, _madeIn, _papers)
{
	inkleft = _inkleft;
}
InkJetPrinter::~InkJetPrinter() {

}
int InkJetPrinter::getinkleft() {
	return inkleft;
}
void InkJetPrinter::setinkleft(int _inkleft) {
	inkleft = _inkleft;
}
void InkJetPrinter::Print(int pages) {
	if (pages > papers) {
		cout << "용지가 부족하여 출력할 수 없습니다" << endl;
		return;
	}
	if (pages > inkleft) {
		cout << "잉크가 부족하여 프린트할 수 없습니다" << endl;
		return;
	}
	cout << "프린트하였습니다" << endl;
	papers -= pages;
	inkleft -= pages;
}
void InkJetPrinter::Show() {
	cout << modelName << "," << madeIn << "," << "남은종이 " << papers << "장," << "남은 잉크 " << inkleft << endl;

}