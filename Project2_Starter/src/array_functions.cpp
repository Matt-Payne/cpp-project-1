/*
 * functionstocomplete.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: keith
 */

//============================================================================
//	TODO add necessary includes here
//============================================================================

//============================================================================
//	stuff you will need
//============================================================================
//TODO define a structure to track words and number of times they occur

//TODO add a global array of entry structs (global to this file)

//TODO add variable to keep track of next available slot in array

//TODO define all functions in header file
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "utilities.h"
#include "constants.h"
using namespace std;


void extractTokensFromLine(std::string &myString){

	const char constants::CHAR_TO_SEARCH_FOR = ' ';
	stringstream ss(myString);

	string tempToken;
//	while(getline(ss, tempToken, CHAR_TO_SEARCH_FOR)){
//
//		processToken(tempToken);
//	}
}

struct word_list{

	string word;

	int number_occurences;
};

word_list words[1] = {};

void clearArray(){
	int i = 0;


		words = NULL;


}

int getArraySize(){


	return sizeof(words);
}

std::string getArrayWordAt(int i){

	word_list temp = words[i];

	return temp.word;
}

int getArrayWord_NumbOccur_At(int i){
	word_list temp = words[i];

	return temp.number_occurences;
}

bool processFile(std::fstream &myfstream){

	return false;
}

void processLine(std::string &myString){


}

void processToken(std::string &token){


}

bool openFile(std::fstream& myfile, const std::string& myFileName,
		std::ios_base::openmode mode = std::ios_base::in){


	return false;
}

void closeFile(std::fstream& myfile){


}


int writeArraytoFile(const std::string &outputfilename){

	return 0;
}

void sortArray(constants::sortOrder so){


}






