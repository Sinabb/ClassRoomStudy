#include <iostream>
#include "STL.h"

int main()
{
	CheckImage();
}


/*
	const int STACK_SIZE{ 10 };

enum Command
{
	PUSH = 1,
	POP = 2,
	QUIT = 3
};

struct Stack
{
	int Array[STACK_SIZE]{};
	int topIndex{ -1 };
};

void UserInteract(Stack& stack);
void Push(Stack& stack, int value);
void Pop(Stack& stack);
void StackMessage(Stack& stack);


int main()
{
	Stack Datastructure;

	int command{};

	UserInteract(Datastructure);

	while (true)
	{
		StackMessage(Datastructure);
		std::cout << ">";
		std::cin >> command;

		switch (command)
		{
		case PUSH:
		{
			int value{};
			std::cin >> value;
			Push(Datastructure, value);
		}
		break;
		case POP:
		{
			Pop(Datastructure);
		}
		break;
		case QUIT:
		{
			return 0;
		}
		break;
		default:
		{
			std::cout << "잘못된 명령입니다." << std::endl;
		}
		break;
		}
	}
	return 0;
}

void UserInteract(Stack& stack)
{
	std::cout << "STACK" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "1. Push" << std::endl;
	std::cout << "2. Pop" << std::endl;
	std::cout << "3. Quit" << std::endl;
}

void Push(Stack& stack, int value)
{

	if (stack.topIndex >= STACK_SIZE - 1)
	{
		std::cout << "Stack is FULL!!!" << std::endl;
		return;
	}

	stack.Array[++stack.topIndex] = value;
}

void Pop(Stack& stack)
{

	if (stack.topIndex < 0)
	{
		std::cout << "Stack is empty!" << std::endl;
		return;
	}
	stack.topIndex--;
}

void StackMessage(Stack& stack)
{
	std::cout << "---stack ---" << std::endl;
	if (stack.topIndex < 0)
	{
		std::cout << "Empty" << std::endl;
		return;
	}
	for (int i = stack.topIndex; i >= 0; i--)
	{
		std::cout << stack.Array[i] << std::endl;
	}
}
*/