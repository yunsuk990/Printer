#ifndef INKJETPRINTER_H
#define INKJETPRINTER_H
#include "BasePrinter.h"

class InkJetPrinter :public BasePrinter {
protected:
	int inkleft; //�μ� ���� ���� ���
public:
	InkJetPrinter();
	InkJetPrinter(const string& _modelName, const string& _madeIn, int _papers, int _inkleft);
	~InkJetPrinter();
	int getinkleft();
	void setinkleft(int _inkleft);
	void Print(int pages);
	void Show();
};
#endif
