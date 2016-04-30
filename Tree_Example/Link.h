#pragma once
class Link
{
	Link *Left_child;
	Link *Right_child;
	Link *Parent;
	int count;
public:
	//Link();
	Link* Get_L_Ch();
	Link* Get_R_Ch();
	~Link(){}
	friend class BinaryTree;
};

