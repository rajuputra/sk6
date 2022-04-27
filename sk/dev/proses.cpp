#include <iostream>
#include <fstream>
#include "../library/proses.h"
#include "../library/input.h"
#include "../library/output.h"
using namespace std;

int main(){
	Input input;
	input.cetak();
	input.toFile();
	Proses proses;
	proses.getData();
	proses.cetak();
}
