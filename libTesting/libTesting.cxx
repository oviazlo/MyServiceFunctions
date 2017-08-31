#include "../include/serviceFunctions.h"

int main(){

	string someAbsPathWithPattern = "/ssd/viazlo/data/CLIC_o3_v13_ILCSoft-2017-08-23_gcc62_photons_v3_files/CLIC_o3_v13_ILCSoft-2017-08-23_gcc62_photons_v3_E20_theta*0*0*";
	vector<string> tmpVec = getFilesMatchingPattern(someAbsPathWithPattern);
	for (auto i=0; i<tmpVec.size(); i++){
		cout << i << ":\t" << tmpVec[i] << endl;
	}
	cout << endl << "pattern: " << someAbsPathWithPattern << endl;
	return 0;
}
