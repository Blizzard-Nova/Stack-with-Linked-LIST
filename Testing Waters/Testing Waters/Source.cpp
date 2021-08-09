#include <iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
class Stack_List
{
	node* head;//Basically top of the list
	
public:

	Stack_List()
	{
		head = NULL;
	}

	void push(int x);
	void pop();
	void peek();
	int isEmpty();
	void display();

};

void Stack_List::push(int x)
{
	node* temp = new node;
	temp->data = x;
	if (head == NULL)
	{
		temp->next = NULL;
	}
    else
	{
		temp->next = head;
	}

	head = temp;
}

void Stack_List::pop()
{
	node* temp = new node;
	if (head == NULL)
	{
		cout << "Stack underflow \n";
	}
	else
	{
		temp = head;
		head = head->next;
		delete(temp);
	}
}

void Stack_List::peek()
{
	cout << head->data << endl;
}

int Stack_List::isEmpty()
{
	return head == NULL;
}
void Stack_List::display()
{
	Stack_List sl;
	sl.push(10);
	sl.push(20);
	sl.push(30);
	sl.push(40);
	sl.push(50);
	sl.pop();
	while (!sl.isEmpty())
	{
		sl.peek();
		sl.pop();
	}


}
int main()
{
	Stack_List stobj;
	stobj.display();
	return 0;
}