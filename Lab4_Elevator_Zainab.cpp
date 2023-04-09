#include<iostream>
using namespace std;
class Lift{
	public:
	string colour;
	int size;
	char buttons;
	int id;
	float maxload;
	string companyname;
	char currentfloor;
	string model;
	bool isactive;
	string validity;
	Lift(){
		colour="";
		size=0;
		buttons=0;
		id=1;
		maxload=0.0;
		companyname="";
		currentfloor=1;
		model="";
		isactive=0;
		validity="";
	}
	Lift(string colour,int size,char buttons,int id,float maxload,string companyname,char currentfloor,string model,bool isactive,string validity){
	
	this->colour=colour;
	this->size=size;
	this->buttons=buttons;
	this->id=id;
	this->maxload=maxload;
	this->companyname=companyname;
	this->currentfloor=currentfloor;
	this->model=model;
	this->isactive=isactive;
	this->validity=validity;
	
}
	void setproperties(string c,int s,char b){
		colour=c;
		size=s;
		button=b;
	}
	string getproperties(string c,int s,char b){
		colour=c;
		size=s;
		button=b;
		return c;
		return s;
		return b;
		
	}
	~Lift(){
		cout<<"destructing the program"<<endl;
	}
	
	
};
int main(){
	cout<<"GO UP"<<endl;
	cout<<"GO DOWN"<<endl;
	
}
