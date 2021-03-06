#include "Composite.h"

void Directory::AddEntry(IEntry* someEntry) {
	this->mList.emplace_back(someEntry);
}

void Directory::Output(const int someDepth) {
	for (int i = 0; i < someDepth; i++) {
		/* インデントを先頭につけて、フォルダ階層感を出す。 */
		/* someDepthは初期の階層の深さ */
		cout << "    ";
	}

	cout << "Directory:" << this->mName.c_str() << endl;

	for (IEntry* item : mList) {
		/* 階層を一つ深くする。 */
		item->Output(someDepth + 1);
	}
}

void File::Output(const int someDepth) {
	for (int i = 0; i < someDepth; i++) {
		/* インデントを先頭につけて、フォルダ階層感を出す。 */
		cout << "    ";
	}

	cout << "File:" << this->mName.c_str() << endl;
}