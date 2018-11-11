//This code is under development!
//This code has memory leak. This leaks will be deleted soon.
#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class LinkedList
{
private:
	node *head, *tail;
	
public:
	LinkedList()
	{
		head = NULL;
		tail = NULL;		
	}

	node* gethead()
	{
		return head;
	}

	void viewlist()
	{
		 node *iterator;
		 iterator = head;
		 if (iterator == NULL)
		 {
			 cout << "there is no list" << endl;
		 }
		 else
		 {
			 while (iterator != NULL)
			 {
				 cout << iterator->data << endl;
				 iterator = iterator->next;
			 }
		 }
	}

	void addnode_end(int n)
	{
		node *temp = new node;
		temp->data = n;
		temp->next = NULL;

		if (head==NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = tail->next;
		}
	}

	void addnode_beginning(int n)
	{
		node* temp=new node;
		temp->data = n;
		
		temp->next = head;
		head = temp;
	}

	void addnode_location(int item, int position)
	{
		node *temp = new node;
		temp->data = item;

		if (position == 0)				
		{
			temp->next = head;      
			head = temp;
		}
		else
		{
			node *current= head;						
			for (int i = 1; i < position-1; i++)		
			{
				current = current->next;				
			}
			temp->next = current->next;				
			current->next = temp;
		}
		}
	}
	
	void deletenode_end()
	{
		node *iterator = new node;
		
		iterator = head;

		while (iterator->next->next != NULL) // Using tail is also available here.
		{			
			iterator = iterator->next;
		}
		iterator->next = NULL; //
	}

	void deletenode_beginning()
	{
		node *temp = new node;
		temp = head->next;
		head = temp;
	}

	void deletenode_location(int position)
	{
		node *temp = new node;
		temp = head;	
		
			if (position == 1)
			{
				temp = head->next;
				head = temp;		
			}			
			else
			{
				for (int i = 2; i < position; i++)
				{
					temp = temp->next;
				}
				temp->next = temp->next->next;
			}		
	}
		
	void firstnode_change(int n)
	{
		node* temp = new node;
		temp->data = n;

		temp->next = head;
		head->data = temp->data;
	}

	void connect_lists(node *head1, node *head2)
	{
		node *iterator;
		iterator = head1;

		if (head1 != NULL && head2 != NULL)
		{
			while (true)
			{
				if (iterator->next == NULL)
				{
					iterator->next = head2;
					break;
				}
				iterator = iterator->next;
			}
		}
		else
		{
			cout << "one or both list cannot found" << endl;
		}	
	}
};

int main() 
{
	LinkedList a;
		
	a.addnode_end(1);
	a.addnode_end(2);
	cout << "this is 'a' list that num added to end" << endl;
	a.viewlist();
	
	cout << endl;
	a.addnode_beginning(0);
	cout << "this is 'a' list that number added to head" << endl;
	a.viewlist();

	cout << endl;
	a.firstnode_change(-1);
	cout << "this is 'a' list that number changed with head" << endl;
	a.viewlist();

	cout << endl;
	a.gethead();
	LinkedList b;
	LinkedList c;
	
	b.addnode_end(88);
	b.addnode_end(99);
	cout << "this is 'b' list"<<endl;
	b.viewlist();

	cout << endl;
	a.connect_lists(a.gethead(),b.gethead());
	cout << "this is 'a+b' list" << endl;
	a.viewlist();

	cout << endl;
	a.deletenode_end();
	cout << "this is 'a+b' list that deleted last number" << endl;
	a.viewlist();

	cout << endl;
	a.deletenode_beginning();
	cout << "this is 'a+b' list that deleted first number" << endl;
	a.viewlist();
	
	cout << endl;
	a.addnode_location(5,2);    //item=5, position=2
	cout << "this is 'a+b' list that added '5' to position 2" << endl;
	a.viewlist();

	cout << endl;
	a.deletenode_location(1);   // position must be greater than 0 and lower than max size of list.
	cout << "this is 'a+b' list that deleted position 0" << endl;
	a.viewlist();
}
