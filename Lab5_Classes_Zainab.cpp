#include<iostream>
using namespace std;
class One{
	public:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	private:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number";
			cin>>admissionnumber;
		}
	protected:
		int rollno ;
		void getrollno(){
			cout<<"enter the rollno";
			cin>>rollno;
		}
	//null constructor
	public:
	One(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};
class Two: public One {
		public:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number:"<<endl;
			cin>>admissionnumber;
		}
	private:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}

	protected:
		int rollno ;
		void getrollno(){
			cout<<"enter the rollno";
			cin>>rollno;
		}
	//null constructor
	public:
	Two(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};	
class Three{
		protected:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	private:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number";
			cin>>admissionnumber;
		}
	public:
		int rollno ;
		void getrollno(){
			cout<<"enter the roll no";
			cin>>rollno;
		}
	//null constructor
	public:
	Three(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};
class Four:public Three,Two,One{
	public:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	public:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number";
			cin>>admissionnumber;
		}
	public:
		int rollno ;
		void getrollno(){
			cout<<"enter the roll no";
			cin>>rollno;
		}
};
class Five{
	public:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	private:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number";
			cin>>admissionnumber;
		}
	protected:
		int rollno ;
		void getrollno (){
			cout<<"enter the roll no ";
			cin>>rollno ;
		}
	//null constructor
	public:
	Five(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};
class Six:public One{
	public:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number:"<<endl;
			cin>>admissionnumber;
		}
	private:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	protected:
		int rollno ;
		void getrollno(){
			cout<<"enter the roll no :"<<endl;
			cin>>rollno ;
		}
	//null constructor
	public:
	Six(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};
class Seven:public Six{
	public:
		int rollno ;
		void getrollno (){
			cout<<"enter the roll no :"<<endl;
			cin>>rollno;
		}
	protected:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	private:
		int admissisonnumber;
		void getadmissisonnumber(){
			cout<<"enter the admissison number"<<endl;
			cin>>admissisonnumber;
		}
	
	//null constructor
	public:
	Seven(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};
class Eight:public Seven{
	public:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	private:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number";
			cin>>admissionnumber;
		}
	protected:
		int rollno ;
		void getrollno(){
			cout<<"enter the roll no";
			cin>>rollno;
		}
	//null constructor
	public:
	Eight(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};
class Nine:public Eight,Seven{
	public:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number:"<<endl;
			cin>>admissionnumber;
		}
	private:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	protected:
		int rollno ;
		void getrollno(){
			cout<<"enter the roll no:"<<endl;
			cin>>rollno;
		}
	//null constructor
	public:
	nine(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};
class Ten:public Seven,Eight,Nine{
	public:
		int rollno ;
		void getrollno(){
			cout<<"enter the roll no:"<<endl;
			cin>>rollno;
		}
	protected:
		string studentname;
		void getstudentname(){
			cout<<"enter the name of student:"<<endl;
			cin>>studentname;
		}
	private:
		int admissionnumber;
		void getadmissionnumber(){
			cout<<"enter the admission number"<<endl;
			cin>>admissionnumber;
		}
	
	//null constructor
	public:
	Ten(){
		this->studentname=" ";
		this->admissionnumber=0;
		this->rollno=0;
	}
};

int main(){
	One st1;
	st1.getstudentname();
	Two st2;
	st2.getadmissionnumber();
	Three st3;
	st3.getrollno();
	Four st4;
	st4.getstudentname();
    st4.getadmissionnumber();
	st4.getrollno();
	Five st5;
	st5.getstudentname();
	Six st6;
    st6.getadmissionnumber();
	Seven st7;
	st7.getrollno();
	Eight st8;
	st8.getstudentname();
    Nine st9;
	st9.getadmissionnumber();
	Ten st10;
	st10.getrollno();
	
}
