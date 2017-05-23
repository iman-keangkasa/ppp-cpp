//This program is a result of practice Ive done for chapter 4:Computation
//The name of this program is: chapter-4

#include "/home/iman/cpp_playground/std_lib_facilities.h"
int main()
{
	//Character 'promotion' expression with mixed type
//	char a='5';
//	int b=int('a');
//	int c='a';
//	int d=int(a);
//	int e=a;
	
//	cout<<"The char a has the value:"<<a
//		<<"\nThe int b has the character 'a' converted to int explicitly:"<<b
//		<<"\nThe int c has the character 'a' converted to int implicitly:"<<c
//		<<"\nThe int d has the char a converted to int implicitly:"<<d
//		<<"\nThe int e has the char a converted to int implicitly:"<<e<<endl;

	//centimeter and inches conversion using if-statement
	const double cm_per_inch=2.54;
	double length=1;
	char unit=0;
//	cout<<"Please write a length and its unit either i (inches) c (centimeter)"
//		<<"\nas an example \"4 i\" or \"4 c\": "; 
//	cin>>length>>unit;
//	if(unit=='i')
//		cout<<length<<" inches=="<<length*cm_per_inch<<" cm"<<endl;
//	else if(unit=='c')
//		cout<<length<<" cm=="<<length/cm_per_inch<<" inches"<<endl;
//	else
//		cout<<"I do not understand the unit you are using"<<endl;

	//using switch-statement to represent choice
//	cout<<"Please write a length and its unit either i (inches) c (centimeter)"
//		<<"\nas an example \"4 i\" or \"4 c\": "; 
//	cin>>length>>unit;
	
//	switch(unit){
//	case 'i':
//	case 'I':	
//		cout<<length<<" inches=="<<length*cm_per_inch<<" cm"<<endl;
//		break;
//	case 'c':
//	case 'C':
//		cout<<length<<" cm=="<<length/cm_per_inch<<" inches"<<endl;
//		break;
//	default:	
//		cout<<"I do not understand the unit you are using"<<endl;
//		break;
//	}

	//while-statement
//	int i=0;
//	while(i<100){
//		cout<<"|"<<i<<"\t|"<<pow(i,2)<<endl;
//		++i;
//	}

	//while-statement 2
//	int i=1;
//	char c=i;
//	while(i<=200){
//		cout<<"Interger value '"<<i<<"'has the same value as character '"<<c<<"'"<<endl;
//		++i;
//		c=i;
//	}
	
	//for-statement
//	for(int i=0;i<100;++i){
//		cout<<i<<"\t"<<square(i)<<endl;
//	}
//	encouragement();

	//for-statement 2
	for(int i=0;i<100;++i) print_square(i);
}
