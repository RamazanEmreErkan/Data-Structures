#include <iostream>
using namespace std;

class stack
{
private:
	int  top, size;
public:
	int *ptr;

	stack(int size)
	{
		this->size = size;
		top = -1;
		ptr = new int[size];
	}

	~stack()
	{
		delete ptr;
	}

	bool isEmpty()
	{
		if (top < 0)	 //if top==0, there is only 1 element in stack
			return true;
		else
			return false;
	}

	bool isFull()
	{
		if (top == size - 1)
			return true;
		else
			return false;
	}

	int push(int data)
	{
		if (isFull() == true)
		{
			cout << "stack is full, " << data << " couldn't added." << endl;
			return 0;
		}
		else
		{
			++top; //top=0
			ptr[top] = data;	//top holds first elements of ptr[];
			cout << "\n" << data << " is added." << endl;
			return 0;
		}
	}

	int pop()
	{
		if (isEmpty() == true)
		{
			cout << "stack has no element." << endl;
			return 0;
		}
		else
		{
			--top; //top is deleted, new top is (top-1)
			cout << "\nData " << ptr[top + 1] << " is deleted.\n";
		}
	}

	int show()
	{
		if (isEmpty() == true)
		{
			cout << "\nstack has no element" << endl;
			return 0;
		}
		else
		{
			cout << "\nstack is:\n";
			for (int i = 0; i <= top; i++)
			{
				cout << i << ". element= " << ptr[i] << endl;
			}
			return 0;
		}
	}
};

class arr_stack
{
private:
	int top;
public:
	int data;
	int arr[10];

	arr_stack()
	{
		top = -1;
	}

	bool isEmpty()
	{
		if (top < 0)	 //if top==0, there is only 1 element in stack
			return true;
		else
			return false;
	}

	bool isFull()
	{
		if (top == 9)
			return true;
		else
			return false;
	}

	int push(int data)
	{
		this->data = data;

		if (isFull() == true)
		{
			cout << "stack is full";
			return 0;
		}
		else
		{
			++top;
			arr[top] = data;
			cout << data << " pushed to the stack." << endl;
		}
	}

	int pop()
	{
		if (isEmpty() == true)
		{
			cout << "stack has no element." << endl;
			return 0;
		}
		else
		{
			--top; //top is deleted, new top is (top-1)
			cout << "\nData " << arr[top + 1] << " is deleted.\n";
		}
	}

	int show()
	{
		if (isEmpty() == true)
		{
			cout << "\nstack has no element" << endl;
			return 0;
		}
		else
		{
			cout << "\nstack is:\n";
			for (int i = 0; i <= top; i++)
			{
				cout << i << ". element= " << arr[i] << endl;
			}
			return 0;
		}
	}
};

int main()
	{
	cout << "------------------------stack with pointer------------------------" << endl;
		stack stc(3); // number is size of stack.

		stc.push(1);
		stc.push(2);
		stc.push(3);
		stc.show();

		stc.pop();
		stc.show();

		stc.pop();
		stc.show();

		stc.push(77);
		stc.push(88);
		stc.push(99);
		stc.show();
		cout << endl << stc.isEmpty() << endl; //if it's 0 -> stack is not empty;
		cout << endl << stc.isFull() << endl; //if it's 0 -> stack is not full;
		

		cout << "---------------------stack with array---------------------" << endl;

		arr_stack arrstc;

		arrstc.push(1);
		arrstc.push(2);
		arrstc.push(3);
		arrstc.show();

		arrstc.pop();
		arrstc.show();
		arrstc.isEmpty();
		arrstc.isFull();

		return 0;
	}