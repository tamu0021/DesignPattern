#include "Composite.h"

void Directory::AddEntry(IEntry* someEntry) {
	this->mList.emplace_back(someEntry);
}

void Directory::Output(const int someDepth) {
	for (int i = 0; i < someDepth; i++) {
		/* ƒCƒ“ƒfƒ“ƒg‚ðæ“ª‚É‚Â‚¯‚ÄAƒtƒHƒ‹ƒ_ŠK‘wŠ´‚ðo‚·B */
		/* someDepth‚Í‰Šú‚ÌŠK‘w‚Ì[‚³ */
		cout << "    ";
	}

	cout << "Directory:" << this->mName.c_str() << endl;

	for (IEntry* item : mList) {
		/* ŠK‘w‚ðˆê‚Â[‚­‚·‚éB */
		item->Output(someDepth + 1);
	}
}

void File::Output(const int someDepth) {
	for (int i = 0; i < someDepth; i++) {
		/* ƒCƒ“ƒfƒ“ƒg‚ðæ“ª‚É‚Â‚¯‚ÄAƒtƒHƒ‹ƒ_ŠK‘wŠ´‚ðo‚·B */
		cout << "    ";
	}

	cout << "File:" << this->mName.c_str() << endl;
}