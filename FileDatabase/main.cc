
#include<string>
#include<iostream>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include "FileDatabase.h"
#include<sys/types.h>
#include<dirent.h>
#include<unistd.h>

// Documentation of reading all files, http://pubs.opengroup.org/onlinepubs/7908799/xsh/dirent.h.html

using namespace std;




int main(){


	FileDatabase db;

	db.createNewsgroup("Putin");
	db.createNewsgroup("Tamm");
	db.createNewsgroup("Zuma");

	db.deleteNewsgroup(53);


}