#ifndef Assignment_4_BinaryNode_h
#define Assignment_4_BinaryNode_h


template<class ItemType>
class BinaryNode
{
private:
    ItemType              item;         // Data portion
    BinaryNode<ItemType>* leftPtr;		// Pointer to left child
    BinaryNode<ItemType>* rightPtr;		// Pointer to right child
    
public:
    // constructors
    BinaryNode(const ItemType & anItem)			   {item = anItem; leftPtr = 0; rightPtr = 0;}
    BinaryNode(const ItemType & anItem,
               BinaryNode<ItemType>* left,
               BinaryNode<ItemType>* right)		   {item = anItem; leftPtr = left; rightPtr = right;}
    // accessors
    void setItem(const ItemType & anItem)		   {item = anItem;}
    void setLeftPtr(BinaryNode<ItemType>* left)	   {leftPtr = left;}
    void setRightPtr(BinaryNode<ItemType>* right)  {rightPtr = right;}
    // mutators
    ItemType getItem() const					   {return item;}
    BinaryNode<ItemType>* getLeftPtr() const	   {return leftPtr;}
    BinaryNode<ItemType>* getRightPtr() const	   {return rightPtr;}
    
    bool isLeaf() const							   {return (leftPtr == 0 && rightPtr == 0);}
}; 



#endif
