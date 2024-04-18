#include<iostream>
using namespace std;
class Employee{
	public:Employee()
	{
		cout<<"Employee Constructor "<<endl;
	}
   	void show()
	{
	cout<<"welcome:--"<<endl;
		
	}
};
class Manager: public Employee{
	public:Manager(){
			cout<<"Manager Constructor "<<endl;
         	}
         	void show()
         	{
         		cout<<"welcome:"<<endl;
			 }
};
 int main()
 {
 	//Employee e;
 	//Manager m;
 	//SalesPerson sp;
 	Manager *ptr;
 	Employee e;
 
     ptr=(Manager*)&e;
     ptr->show();
	  //	Employee* employee = new Manager();
// employee->Manager();
 //	SalesManager salesMgr;
 	return 0;	
 }
 /* 
 The reason you're seeing the behavior where the show() function of the Manager class is invoked instead of the Employee class is because
  you're casting the Employee object to a Manager pointer. This is called "forcing a derived object into a base class pointer," 
 but it's not recommended because it violates the principle of object-oriented programming known as the Liskov substitution principle.
 
 */
 
