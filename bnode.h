#ifndef BNODE_H
#define BNODE_H


// copy vs assignment operator--are we copying exact memory locations or making new memory filled with same data?
// size() -- is this only for the entire tree or can it be used with a root nodes descendant? p 187
// clear -- free memory allocation of each node with delete?


template <class T>
class BNode
{
public:
	T data;
	BNode<T>* pLeft;
	BNode<T>* pRight;
	BNode<T>* pParent;
	BNode() : pLeft(NULL), pRight(NULL), pParent(NULL), data(NULL) {} //instructions do not mention settin Data to null
	BNode(const T & t) : pLeft(NULL), pRight(NULL), pParent(NULL), data(t) {}
};

template <class T>
void addLeft(BNode <T> * pNode, BNode <T> * pAdd)
{
	pNode->pLeft = pAdd;
	pAdd->pParent = pNode;
}

template <class T>
void addRight(BNode <T> * pNode, BNode <T> * pAdd)
{
	pNode->pRight = pAdd;
	pAdd->pParent = pNode;
}

template <class T>
void addLeft(BNode <T> * pNode, const T & t) throw (const char *)
{
	BNode<T>* pAdd = new BNode<T>(t);
	pNode->pLeft = pAdd;
	pAdd->pParent = pNode;
}

template <class T>
void addRight(BNode <T> * pNode, const T & t) throw (const char *)
{
	BNode<T>* pAdd = new BNode<T>(t);
	pNode->pRight = pAdd;
	pAdd->pParent = pNode;
}

template <class T>
int sizeBTree(const BNode <T> * pRoot)
{
	return 0;
}

template <class T>
void deleteBTree(BNode <T> * & pNode)
{}

template <class T>
BNode <T> * copyBTree(const BNode <T> * pSrc) throw (const char *)
{}


#endif // !BNODE_H
