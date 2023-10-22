#include <iostream>
using namespace std;
struct node
{
    string birthday;
    string name;
    struct node *next; 
} *head;
struct node *temp,*newNode;
void createNode();
void traverse();
void createNode()
{
    int n,i;
    cout << "Number of students: ";
    cin >> n;
    head = new node;
    if (head == NULL)
    {
        cout << "Memory is not available\n";
        exit(0);
    }
    cout << "Student 1:\n";
    cout << "Name: ";
    cin >> head->name;
    cout << "Birthday: ";
    cin >> head->birthday;
    head->next = NULL;
    node *temp = head;
    node *newNode;
    for (int i = 2; i <= n; i++)
    {
        newNode = new node;
        if (newNode == NULL)
        {
            cout << "Memory is not available\n";
            exit(0);
        }
        cout << "Student " << i << ":\n";
        cout << "Name: ";
        cin >> newNode->name;
        cout << "Birthday: ";
        cin >> newNode->birthday;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }
}
void insertnewdata()
{
int c,pos;
node *ptr = new node;
//node *ptr2 = new node;
cout<<"\nWhere You want to Insert the new data??\n1.At beginning\n2.At ending\n3.Somewhere in list\n/your Choice: ";
cin>>c;
cout<<"\n";
//struct node *temp,*newNode;
if(c==1)
{
if(ptr == NULL)
{
 	cout << "Memory is not available\n";
        exit(0);
}
else
{
	cout << "Student " <<  ":\n";
        cout << "Name: ";
        cin >> ptr->name;
        cout << "Birthday: ";
        cin >> ptr->birthday;
        ptr -> next = head;
        head = ptr;
        cout<<"Data Inserted Succesfully\n";   
}
}
else if(c==2)
{
	if(ptr == NULL)
	{
	cout << "Memory is not available\n";
        exit(0);
	}
	else
	{	
	temp = head;
	while(temp->next != NULL)
	{
	temp = temp->next;
	}
	cout << "Student " <<  ":\n";
    cout << "Name: ";
	cin>>ptr->name;
	cout << "Birthday: ";
	cin>>ptr-> birthday;
	ptr->next = NULL;
	temp->next = ptr;
	cout<<"Data inserted Successfully\n";
	}
}
else if(c==3)
{
	if(ptr == NULL)
	{
	cout << "Memory is not available\n";
        exit(0);
	}
	else
	{
	    cout<<"Enter At what Position do you want to add node: ";
	    cin>>pos;
	    temp = head;
	    pos = pos-1;
	    cout << "Student " <<  ":\n";
        cout << "Name: ";
	    cin>>ptr->name;
	    cout << "Birthday: ";
	    cin>>ptr-> birthday;
	    ptr->next = NULL;
	    while(pos!=1)
	    {
	        temp = temp->next;
	        pos--;
	    }
	    ptr->next = temp->next;
	    temp->next = ptr;
	    cout<<"Data inserted Successfully";
	}
}
}
void deletedata()
{
int c,pos,i=0;
node *ptr = new node;
cout<<"\nFrom Where You want to Delete the data??\n1.At beginning\n2.At ending\n3.Somewhere in list\nYour Choice: ";
cin>>c;
if(c==1)
{
    if(head == NULL)
    {
        cout<<" Can't delete from empty list";
       
    }
    ptr = head;
    head = head->next;
    delete ptr;
    cout<<"Data Deleted Successfully\n"; 
}
else if(c==2)
{
    if(head == NULL)
    {
        cout<<"Can't delete from empty list";
    }
    else
    {
    temp = head;
    ptr = NULL;
    while(temp->next!= NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
    ptr->next = NULL;
    delete temp;
    cout<<"Data Deleted Successfully\n";
    }
}
else if(c==3)
{
    cout<<"Enter From what Position do you want to delete node: ";
	cin>>pos;
	pos = pos-1;
    if(head == NULL)
    {
        cout<<"Can't delete from empty list";
    }
    else
    {
    temp = head;
    ptr = NULL;
    //ptr->next = NULL;
    while(i< pos && temp != NULL)
    {
        ptr = temp;
        temp = temp->next;
        i++;
    }
    ptr->next = temp->next;
    delete(temp);
    cout<<"Data Deleted Successfully\n";
    }
}
else
    {
      cout<<"Position out of bounds";
    }
}
void displaymessage()
{    
    string bday;
    if(head == NULL)
    {
        cout<<"Can't delete from empty list";
    }
    else{
    
    temp = head;
    cout<<"Enter the Birthdate to display the message : - ";
    cin>>bday;
    cout<<"\n";
    while(temp != NULL)
    {
        if (temp->birthday == bday) 
        {
            cout<<"Happiest Birthday!!!!!\nGod Bless You!!!!\nDear "<<temp->name<<endl;
            
        }
        temp = temp->next;
    }
}
}
void traverse()
{
    node *temp = head;
    int i = 1;
    cout << "Sr.No\t\tName\t\tBirthday\n";
    while(temp != NULL)
    {
        cout << i << "\t\t" << temp->name << "\t\t" << temp->birthday << "\n";
        temp = temp->next;
        i++;
    }
}
void reverselist()
{
    node *prev = new node;
    node *current = new node;
    if(head == NULL)
    {
        cout<<"Can't reverse the list . The list is empty\n";
    }
    else if(head != NULL)
    {
        prev = head;
        current= head->next;
        head = head->next;
        prev->next = NULL;
        while(head!=NULL)
        {
            head = head->next;
            current->next = prev;
            prev = current;
            current = head;
            
        }
        head = prev;
        cout<<"Link Reversed Successfully\n";
    }
}
int main()
{
    char choice;
    createNode();
    do {
        cout << "\n-----------------------Menu:----------------------------" << endl;
        cout << "1. Insert New Data " << endl;
        cout << "2. Delete the Data " << endl;
        cout << "3. Display Birthday Message" << endl;
        cout << "4. Display the Whole Data" << endl;
        cout << "5. Display in Reverse order" << endl;
        cout<<"5.Exit"<<endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case '1':
                cout << "You selected Option 1" << endl;
                	insertnewdata();
                	break;
            case '2':
                cout << "You selected Option 2." << endl;
                deletedata();
                break;
            case '3':
                cout << "You selected Option 3." << endl;
                displaymessage();
                break;
            case '4':
                cout << "You selected Option 4." << endl;
                traverse();
                break;
            case '5':
                cout<<"You selected Option 5."<<endl;
                reverselist();
                break;
            case '6':
                cout<<"Exit the program"<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != '6');
    return 0;
}
