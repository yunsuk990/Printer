#ifndef BASEPRINTER_H
#define BASEPRINTER_H
#include <string>
using namespace std;

class BasePrinter {
protected:
	string modelName;
	string madeIn;
	int papers;
public:
	BasePrinter();
	BasePrinter(const string& _modelName, const string& _madeIn, int _papers);
	virtual~BasePrinter();
	string getmodelName();
	void setmodelName(const string& _name);
	string getmadeIn();
	void setmadeIn(const string& _name);
	int getpapers();
	void setpapers(int _papers);
	virtual void Print(int pages) = 0;
	virtual void Show() = 0;
};


#endif
