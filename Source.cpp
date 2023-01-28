#include<iostream>
#define SIZE 5

using namespace std;

class Stack
{
	int top;
	int array[SIZE];
public:
	Stack() :top(-1)
	{
		for (int i = 0; i < SIZE; i++)
		{
			array[i] = 0;
		}
	}
	void myPush(int data);
	int  myPop();
	int  peakValue();
	int  myTop();
	bool isEmpty();
	void myGetter();
};
void Stack::myGetter()
{
	cout << " Stack Data: ";
	for (int i = top; i >=  0; i--)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
}
void Stack::myPush(int data)
{
	if (top > SIZE - 1)
	{
		cout << "\n Stack Overflow ... !!!\n";
	}
	else
	{
		array[++top] = data;
	}
}
int Stack::myPop()
{
	if (top < 0)
	{
		cout << "\n Stack UnderFlow ... !!!\n";
		return -99;
	}
	else
	{
		return array[top--];
	}
}
int Stack::peakValue()
{
	if (top < 0)
	{
		cout << "\n Stack UnderFlow ... !!!\n";
	}
	else
	{
		return array[top];
	}
}
int Stack::myTop()
{
	return top;
}
bool Stack::isEmpty()
{
	if (top < 0)
		return true;
	else
		return false;
}


int main()
{
	Stack stack;
	int data;
	char ch;

	while (true) {
		cout << "\n -----------(MAIN MENU)-----------\n";
		cout << " 1) PUSH \n";
		cout << " 2) POP \n";
		cout << " 3) PEAK \n";
		cout << " 4) IS EMPTY \n";
		cout << " 5) TOP \n";
		cout << " 6) GETTER \n";
		cout << " 7) EXIT \n\n";

		cout << " Enter Your Choice: ";
		cin >> ch;

		switch (ch)
		{
		case '1':
			cout << "\n Enter Data: ";
			cin >> data;
			stack.myPush(data);
			break;
		case '2':
			data = stack.myPop();
			if(data != -99)
				cout << "Pop Value: " << data << endl;
			break;
		case '3':
			cout << "Peak Value: " << stack.peakValue() << endl;
			break;
		case '4':
			if (stack.isEmpty())
				cout << " Stack is Empty ... \n";
			else
				cout << " Stack is Not Empty \n";
			break;
		case '5':
			cout << "Value Of Top: " << stack.myTop() << endl;
			break;
		case '6':
			stack.myGetter();
			break;
		case'7':
			exit(-1);
		default:
			cout << " Invalid Input ... !!!\n";
		}
	}
}