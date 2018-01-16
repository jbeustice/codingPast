/*	Name: JBEustice
*	Year: 2018
*	Description: a really lame/embellished "Hello Wrorld" program
*/

#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>
#include <iostream>
#include <stdlib.h>

using std::cout;
using std::string;

class Candidate
{
public:
	Candidate();
	Candidate(string newName,string newDegree,string newSkill,int newYear);
	~Candidate();

	// setters
	void setDegree(string newDegree);
	void setSkill(string newSkill);
	void setName(string newName);
	void setYear(int newYear);
	void setNextPtr(Candidate *newNextPtr);
	// getters
	string getDegree() const;
	string getSkill() const;
	string getName() const;
	int getYear() const;
	Candidate *getNextPtr() const;

private:
	string degree;
	string skill;
	string name;
	int year;
	Account *pNext;
};

#endif
