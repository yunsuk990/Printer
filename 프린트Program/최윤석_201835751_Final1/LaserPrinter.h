#ifndef LASERPRINTER_H
#define LASERPRINTER_H
#include "BasePrinter.h"

class LaserPrinter :public BasePrinter {
protected:
	int toner;
public:
	LaserPrinter();
	LaserPrinter(const string& _modelName, const string& _madeIn, int _papers, int _toner);
	~LaserPrinter();
	int gettoner();
	void settoner(int _toner);
	void Print(int pages);
	void Show();
};

#endif
