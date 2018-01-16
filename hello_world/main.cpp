/*	Name: JBEustice
*	Year: 2018
*	Description: a really lame/embellished "Hello Wrorld" program
*/

#include <candidate.h>

int main(void)
{
	Candidate me;
	cout<<"Hello World!";
  if(me.getPtr()==NULL)
  {
    cout<<" Nobody is on the job market this year."<<endl<<endl;
  }
  else
  {
    cout<<" "<<me.getName()<<" is on the job market in "<<me.getYear()<<endl<<endl;
  }
	return 0;
}
