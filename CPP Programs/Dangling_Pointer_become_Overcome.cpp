#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char *ptr;
	public:
		string1(char*);
		void stringdisplay();
		~string1();
		string1(string1&);		
};
void string1::stringdisplay()
{
	cout<<"Length is "<<len<<endl;
	cout<<"String is "<<ptr<<endl;
	
}
string1::string1(char* sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);	
}
string1::~string1()
{
	cout<<"destructor is called \n";
	if(ptr)
	delete []ptr;
	ptr=NULL;
}
string1::string1(string1&c)
{
	this->len=c.len;
	this->ptr=new char[this->len+1];
	strcpy(this->ptr,c.ptr);
}
int main()
{
	string1 c2("rahul");
	c2.stringdisplay();
	{
		string1 c3(c2);
		c3.stringdisplay();
		c3.~string1();
		
	}
	c2.stringdisplay();
}

