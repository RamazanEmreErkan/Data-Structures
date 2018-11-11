#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class queue
{
private:
	node *front, *back ;

public:
	queue()
	{
		front = NULL;
		back = NULL;
	}
	
	bool isEmpty()
	{
		if (back == NULL)
			return true;		
	}

	void enqueue(int n)
	{
		node* temp = new node;
		temp->data = n;
		if (front==NULL && back==NULL)
		{
			front = temp;
			back = temp;
		}
		else
		{
			back->next = temp;
			back = temp;
			temp->next = NULL;
		}
	}
	
	int dequeue()
	{
		node* temp = new node;
		
		
		if (isEmpty()==true)
		{
			cout << " Queue is empty." << endl;
			return 0;
		}
		else 
		{
			temp = front;
			front = front->next;
			delete temp;
		}
	}

	void show()
	{
		node* iter = new node;
		iter = front;
		
		cout << "front=\t";
		
		while (iter!=NULL)
		{
			cout << iter->data <<"-";
			iter = iter->next;
		}
		cout << endl;
		delete iter;
	}		
};

int main()
{
	queue q1;
	q1.show();
	
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);

	q1.show();

	q1.dequeue();
	q1.dequeue();
	q1.show();

	q1.enqueue(6);
	q1.enqueue(7);
	q1.show();
	
	return 0;
}