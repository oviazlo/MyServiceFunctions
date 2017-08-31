#include "../include/serviceFunctions.h"

int main(){

	string someAbsPath = "/abc/edf/fileNameBase.ext";
	cout << "dirName: " << getDirNameFromAbsolutePath(someAbsPath) << ";\tfileName: " << getFileNameFromAbsolutePath(someAbsPath) << endl;

	return 0;
}
