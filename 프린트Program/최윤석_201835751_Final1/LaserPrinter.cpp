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
		cout << "������ �����Ͽ� ����� �� �����ϴ�" << endl;
		return;
	}
	if (pages > toner) {
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
		return;
	}
	cout << "����Ʈ�Ͽ����ϴ�" << endl;
	papers -= pages;
	toner -= pages;
}
void LaserPrinter::Show() {
	cout << modelName << "," << madeIn << "," << "�������� " << papers << "��," << "���� ��� " << toner << endl;
}