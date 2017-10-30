#ifndef BNODE_H
#define BNODE_H


// copy vs assignment operator--are we copying exact memory locations or making new memory filled with same data?
// size() -- is this only for the entire tree or can it be used with a root nodes descendant? p 187
// clear -- free memory allocation of each node with delete?

namespace custom
{
	template <class T>
	class BNode
	{
	public:
		T Data;
		BNode<T>* pLeft;
		BNode<T>* pRight;
		BNode<T>* pParent;
		BNode();
		BNode(const T & t);
	};

	void addLeft(BNode <T> * pNode, BNode <T> * pAdd);
	void addRight(BNode <T> * pNode, BNode <T> * pAdd);
	void addLeft(BNode <T> * pNode, const T & t) throw (const char *);
	void addRight(BNode <T> * pNode, const T & t) throw (const char *);
	int sizeBTree(const BNode <T> * pRoot);
	void deleteBTree(BNode <T> * & pNode);
	BNode <T> * copyBTree(const BNode <T> * pSrc) throw (const char *);

} // !namespace custom

#endif // !BNODE_H
