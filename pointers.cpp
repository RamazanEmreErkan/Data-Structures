// Key point is reading adresses carefully.
#include <iostream>
using namespace std;

int main(){
 	int a=5;	
	int *ptr,**dptr;
	ptr=&a;
	dptr=&ptr;
	

	cout<<"Value of  (a)= "<<a<<endl;
	cout<<"Adress of (&a)= "<<&a<<endl;
	cout<<"Adress of (&ptr)"<<&ptr<<endl<<endl;
	
	cout<<"we made ptr=&a"<<endl<<endl;
	cout<<"Adress that ptr hold (ptr)= "<<ptr<<endl;
	cout<<"Adress of (&ptr)= "<<&ptr<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"*ptr= "<<*ptr<<endl<<endl;
	
	*ptr=20;
	cout<<"we made *ptr=20"<<endl<<endl;
	cout<<"Adress that ptr hold (ptr)= "<<ptr<<endl;
	cout<<"Adress of (&ptr)= "<<&ptr<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"*ptr= "<<*ptr<<endl<<endl;
	
	a=100;
	cout<<"We made a=100"<<endl<<endl;
	cout<<"Adress that ptr hold (ptr)= "<<ptr<<endl;
	cout<<"Adress of (&ptr)= "<<&ptr<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"*ptr= "<<*ptr<<endl<<endl;
	
	cout<<"Adress that dptr hold (dptr)= "<<dptr<<endl;
	cout<<"Adress of (&dptr)= "<<&dptr<<endl;
	cout<<"*dptr= "<<*dptr<<endl;
	cout<<"**dptr= "<<**dptr<<endl;
			
}
