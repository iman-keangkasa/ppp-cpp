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
	  vector<double> suhu;
      double temp;
  //csv   char comma;                 //for CSV data file: dumping the comma character
      
      //this method can also be use to read data files
      while(cin>>temp)            //for leading space data file
  //csv   while(cin>>temp>>comma)     //for CSV data file
          suhu.push_back(temp);
      
      //finding the mean
      double sum;
      for(int i=0;i<suhu.size(); ++i) sum+=suhu[i];
      cout<<"The temperature mean="<<sum/suhu.size()<<endl;
      
      //finding the median
      sort(suhu.begin(),suhu.end()); //sorts the vector from beginning to the end
      cout<<"The temperature median="<<suhu[suhu.size()/2]<<endl;
      
      //sorting and finding repeating words
  //  vector <string> words;
  //  string temp;
 
     //the cin will terminate with Ctrl-D (Unix) or Ctrl-Z (Windows)
 //  while(cin>>temp)
 //      words.push_back(temp);
 
 //  sort(words.begin(),words.end());
     
     //separate the input you wrote and the output
 //  cout<<"\n"; 
                                                                                                                                                       78,0-1        91%

}
