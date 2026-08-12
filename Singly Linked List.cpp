#include<iostream>
#include<string>
using namespace std;

struct Employee
{
	int id;
	char name[100];
	float salary;
	Employee * next;
};

Employee * head = NULL;

void  enterEmployeeDetails()
{
	Employee *newNode = new Employee;
	
	cout<<"Enter Employee ID :";
	cin>> newNode->id;
	
	cout<<"Enter Employee Name :";
	cin>> newNode->name;
	
	cout<<"Enter Employee Salary :";
	cin>> newNode->salary;
	
	newNode->next = head;
	head = newNode;
	
	cout<<"\n Employee Details Entered Successfully";
}

void deleteEmployeeDetails()
{
	int id;
	Employee * temp = head;
	Employee * prev = NULL;
	
	if (temp != NULL && temp->id == id)
	{
		head = temp->next;
		delete temp;
		
		cout<<"\n Employee Details Deleted Successfully";
	}
	
	while (temp != NULL && temp->id != id)
	{
		prev = temp;
		temp = temp->next;
	}
	
	if (temp == NULL)
	{
		cout<<"\n Employee Not Found";
	}
	
	prev->next = temp->next;
	delete temp;
	
	cout<<"Employee Details Deleted Successfully";
}

void searchEmployeeDetails()
{
	int id;
	Employee * temp = head;
	
	while (temp != NULL)
	{
		if (temp->id == id)
		{
			cout<<"\n Employee Details Found :";
			cout<<"\n Employee ID :"<<temp->id<<endl;
			cout<<"\n Employee Name :"<<temp->name<<endl;
			cout<<"\n Employee Salary :"<<temp->salary<<endl;
		}
		temp = temp->next;
	}
	cout<<"\n Employee Details Not Found";
}

void displayEmployeeDetails()
{
	Employee *temp = head;
	
	if (temp == NULL)
	{
		cout<<"\n Employee Details Not Found";
	}
	
	cout<<"\n Employee Records Found :";
	while (temp != NULL)
	{
		cout<<"\n ID :"<< temp->id;
		cout<<"\n Name :"<< temp->name;
		cout<<"\n Salary :"<< temp->salary;
		
		temp = temp->next;
	}
}

int main()
{
	int choice , id;
	
	do
	{
		cout<<" ==== Employee Details Management ====\n";
		cout << "1. Enter Employee Details\n";
        cout << "2. Delete Employee Details\n";
        cout << "3. Search Employee Details\n";
        cout << "4. Display Employee Details\n";
        cout << "5. Exit\n";
        
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice)
        {
        	case 1:
        		enterEmployeeDetails();
        		break;
        		
        	case 2:
        		cout<<"Enter Employee ID to Delete :";
        		cin>>id;
        		deleteEmployeeDetails();
        		break;
        		
            case 3:
            	cout<<"\n Enter Employee ID to Search";
            	cin>>id;
            	searchEmployeeDetails();
            	break;
            	
            case 4:
            	displayEmployeeDetails();
            	break;
            	
            case 5:
            	cout<<"\n Exiting....";
            	break;
            	
            default :
            	cout<<"\n Invalid Choice";
            	
		}
	} 
	while (choice != 5);
	return 0;
}






