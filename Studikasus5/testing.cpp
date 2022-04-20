#include <iostream>
#include <fstream>
#include "input.h"

int main(){
	
	input input;
  	int matkul;
  
  	input.inputIdentitas();
  
	cout<<"Masukan Jumlah Matkul : ";
	cin>>matkul;
	
	input.inputMatkul(matkul);

	
	
}
  
