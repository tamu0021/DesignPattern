#pragma once
#include <iostream>
#include <vector>

using namespace std;

class IEntry {
public:
	virtual void Output(const int someDepth) = 0;
};

class Directory : public IEntry {
public:
	Directory(string someName) : mName(someName) {}
	void AddEntry(IEntry* someEntry);
	void Output(const int someDepth);

private:
	string mName;
	vector<IEntry*> mList;

};

class File : public IEntry {
public:
	File(string someName) : mName(someName) {}
	void Output(const int someDepth);

private:
	string mName;
};
