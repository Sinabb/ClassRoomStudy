#include "QuadTree.h"
#include <cmath>
#include <iostream>

QuadTree::QuadTree() :
	topLeft{ Point() },
	bottomRight{ Point() },
	node{ nullptr },
	nw{ nullptr },
	ne{ nullptr },
	sw{ nullptr },
	se{ nullptr }
{

}

QuadTree::QuadTree(Point topLEft, Point bottomRight) : QuadTree()
{
	this->topLeft = topLeft;
	this->bottomRight = bottomRight;
}

void QuadTree::Insert(Node* node)
{
	this->topLeft = topLeft;
	this->bottomRight = bottomRight;
}

void QuadTree::Insert(Node* node)
{
	if (node == nullptr)
	{
		return;
	}

	//현재 영역이 아니면 무시
	if (!IsInBoud(node->position))
	{
		return;
	}

	//현재 영역이 단위 영역 (1x1) 이라면 더 이상 분할 불가능
	if (std::abs(topLeft.x -bottomRight.x) <= 1&& 
		std::abs(topLeft.y - bottomRight.y) <= 1)
	{
		if (this->node == nullptr)
		{
			this->node = node;
		}return;
	}
}