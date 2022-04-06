#include <iostream>
#include <fstream>
#include "input.h"
#include "proses.h"
#include "output.h"
using namespace std;

int main(){
	input input;
	input.cetak();
	input.toFile();
	
	proses proses;
	proses.cetal();
	proses.getData();
	proses.toFile();
	
	Output output;
	output.getData();
	output.cetak();
	
}

