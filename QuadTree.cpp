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

	//���� ������ �ƴϸ� ����
	if (!IsInBoud(node->position))
	{
		return;
	}

	//���� ������ ���� ���� (1x1) �̶�� �� �̻� ���� �Ұ���
	if (std::abs(topLeft.x -bottomRight.x) <= 1&& 
		std::abs(topLeft.y - bottomRight.y) <= 1)
	{
		if (this->node == nullptr)
		{
			this->node = node;
		}return;
	}
}