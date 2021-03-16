#include "Composite.h"

void Directory::AddEntry(IEntry* someEntry) {
	this->mList.emplace_back(someEntry);
}

void Directory::Output(const int someDepth) {
	for (int i = 0; i < someDepth; i++) {
		/* �C���f���g��擪�ɂ��āA�t�H���_�K�w�����o���B */
		/* someDepth�͏����̊K�w�̐[�� */
		cout << "    ";
	}

	cout << "Directory:" << this->mName.c_str() << endl;

	for (IEntry* item : mList) {
		/* �K�w����[������B */
		item->Output(someDepth + 1);
	}
}

void File::Output(const int someDepth) {
	for (int i = 0; i < someDepth; i++) {
		/* �C���f���g��擪�ɂ��āA�t�H���_�K�w�����o���B */
		cout << "    ";
	}

	cout << "File:" << this->mName.c_str() << endl;
}