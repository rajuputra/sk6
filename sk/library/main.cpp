#include <iostream>
#include <fstream>
#include "proses.h"
#include "input.h"
#include "output.h"
using namespace std;

int main(){
	Input input;
	input.cetak();
	input.toFile();
	Proses proses;
	proses.getData();
	proses.cetak();
	proses.toFile();
	Output output;
	output.getData();
	output.cetak();
}
