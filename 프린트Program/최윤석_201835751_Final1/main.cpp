#include <iostream>
#include <string>
#include "BasePrinter.h"
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;

int main() {
	BasePrinter* BP[5] = { NULL };
	BP[0] = new InkJetPrinter("Officejet V40", "HP", 20, 30);
	BP[1] = new LaserPrinter("SCX-6x45", "SamsungElec", 15, 10);
	BP[2] = new LaserPrinter("SM56", "SamsungElec", 20, 30);
	BP[3] = new LaserPrinter("KM5", "Emerson", 10, 10);
	BP[4] = new InkJetPrinter("Officejet V70", "HP", 30, 30);

	char y;
	int printnum= 0;
	int page;
	while (true) {
		cout << "�����ͳѹ�[0 : 4]: ";
		cin >> printnum;
		switch (printnum) {
		case 0:
			cout << "����Ʈ�� ������ ��: ";
			cin >> page;
			BP[0]->Print(page);
			BP[0]->Show();
			break;
		case 1:
			cout << "����Ʈ�� ������ ��: ";
			cin >> page;
			BP[1]->Print(page);
			BP[1]->Show();
			break;
		case 2:
			cout << "����Ʈ�� ������ ��: ";
			cin >> page;
			BP[2]->Print(page);
			BP[2]->Show();
			break;
		case 3:
			cout << "����Ʈ�� ������ ��: ";
			cin >> page;
			BP[3]->Print(page);
			BP[3]->Show();
			break;
		case 4:
			cout << "����Ʈ�� ������ ��: ";
			cin >> page;
			BP[4]->Print(page);
			BP[4]->Show();
			break;
		}
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�?[y/n]: ";
		cin >> y;
		cout << endl << endl;
		if (y == 'n') {
			exit(1);
		}
	}
}