#include "../include/serviceFunctions.h"

int main(int argn, char* argv[]){

	vector<std::string> m_fileNames;
	stringstream strStream;

	cout << "argn: " << argn << endl;

	if (argn < 2) {
		std::cout << "[WARNING]\tNo input arguments. Exit!" << std::endl;
		return 0;
	}
	else{
		for (int i = 1; i < argn; ++i) {
			strStream << i << ":\t" << argv[i] << endl;
			vector<string> tmpStrVec = getFilesMatchingPattern(argv[i]);
			m_fileNames.insert(m_fileNames.end(), tmpStrVec.begin(), tmpStrVec.end());
		}
	}

	cout << endl << "Found files:" << endl;
	for (auto i=0; i<m_fileNames.size(); i++){
		cout << i << ":\t" << m_fileNames[i] << endl;
	}
	cout << endl << "Patterns:" << endl;
	cout << strStream.str() << endl;

	return 0;
}
