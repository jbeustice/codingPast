/*	Name: JBEustice
*	Year: 2018
*	Description: a really lame/embellished "Hello Wrorld" program
*/

#include "Candidate.h"

// constructor - default values
Candidate::Candidate()
{
  name="J. Bradley Eustice";
	degree="Ph.D";
	skill="enough";
	year=2018;
	pNext=NULL;
}

// constructor - user specified values
Candidate::Candidate(string newName,string newDegree,string newSkill,int newYear)
{
  name=newName;
	degree=newDegree;
	skill=newSkill;
	year=newYear;
	pNext=NULL;
}

// destructor - does nothing
Candidate::~Candidate()
{
}

// setter - candidate name
void Candidate::setName(string newName)
{
	name=newName;
}

// setter - candidate degree
void Candidate::setDegree(string newDegree)
{
	degree=newDegree;
}

// setter - candidate skills
void Candidate::setSkill(string newSkill)
{
	skill=newSkill;
}

// setter - year on job market
void Candidate::setYear(int newYear)
{
	year=newYear;
}

// setter - next ptr
void Candidate::setNextPtr(Candidate *newNextPtr)
{
	pNext=newNextPtr;
}

// getter - candidate name
string Candidate::getName() const
{
	return name;
}

// getter - candidate degree
string Candidate::getDegree() const
{
	return degree;
}

// getter - candidate skill
string Candidate::getSkill() const
{
	return skill;
}

// getter - year on job market
int Candidate::getYear() const
{
	return year;
}

// getter - next ptr
Candidate *Candidate::getNextPtr() const
{
	return pNext;
}
