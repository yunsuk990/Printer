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
		cout << "������ �����Ͽ� ����� �� �����ϴ�" << endl;
		return;
	}
	if (pages > inkleft) {
		cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
		return;
	}
	cout << "����Ʈ�Ͽ����ϴ�" << endl;
	papers -= pages;
	inkleft -= pages;
}
void InkJetPrinter::Show() {
	cout << modelName << "," << madeIn << "," << "�������� " << papers << "��," << "���� ��ũ " << inkleft << endl;

}