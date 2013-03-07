#include <stdlib.h>
#include<iostream>
#include<fstream>
#include<string>
int main(int argc,char* argv[]){
	if (argc==4){
		std::string new_name=argv[2];
		std::string old_name=argv[1];
		std::string filename=argv[3];
		std::fstream file(filename.c_str());
		if (file){
			std::string cmd("sed \'s/"+old_name+"/"+new_name+"/g\' "+filename+"> "+filename+".tmp; cat "+filename+".tmp>"+filename+";rm "+filename+".tmp");
			system(cmd.c_str());
		}
		else{
			std::cerr<<filename<<": No such file"<<std::endl;
			return 1;
		}
	}
	else{
		std::cerr<<"replac3 takes 3 args"<<std::endl;
	}
	return 0;
}
