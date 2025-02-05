#include "BST.hpp"
#include "BSTNode.hpp"


BST_Node* insertHelper(BST_Node *subTreeRoot, int valToAdd)
{
  // if spot is empty
  if(subTreeRoot == nullptr)
  {
    BST_Node* newSubTree = new BST_Node(valToAdd);
    return newSubTree;
  }
  
  if(valToAdd < subTreeRoot -> data())
  {
    // go left
    BST_Node* updatedSubTree = insertHelper(subTreeRoot -> left(), valToAdd);
    subTreeRoot -> left() = updatedSubTree;
    return subTreeRoot;
  }
  else if( valToAdd > subTreeRoot -> data())
  {
    // go right
    BST_Node* updatedSubTree = insertHelper(subTreeRoot -> right(), valToAdd);
    subTreeRoot -> right() = updatedSubTree;
    return subTreeRoot;
  }
  else 
  {
    // if it is equal
    return subTreeRoot;
  }
}

void BST::insert(int newVal)
{
  _root = insertHelper(_root, newVal);
  return;
}



BST_Node* findHelper(BST_Node* subTreeRoot, int valToFind)
{
  // didn't find 
  if(subTreeRoot == nullptr)
  {
    return nullptr;
  }
  // go left
  if (valToFind < subTreeRoot -> data())
  {
    return findHelper(subTreeRoot -> left(), valToFind);
  }
  // go right
  else if (valToFind > subTreeRoot -> data())
  {
    return findHelper(subTreeRoot -> right(), valToFind);
  }
  //found it
  else //if (valToFind == subTreeRoot -> data())
  { 
    return subTreeRoot;
  }
}

BST_Node* BST::find(int valToFind) const
{
  return findHelper(_root, valToFind);
}

void inOrderPrint(BST_Node* subTreeRoot)
{
  if (subTreeRoot -> left() != nullptr)
  {
    inOrderPrint(subTreeRoot-> left());
  }  
    cout << " " << subTreeRoot-> data() << " ";
    
   if (subTreeRoot -> right() != nullptr)
   {
    inOrderPrint(subTreeRoot-> right());
   }
  return;
}

void BST::print() const
{
  inOrderPrint(_root);
  cout<<endl;
  return;
}


BST_Node* removeHelper(BST_Node* subTreeRoot, int valToRemove)
{
  // Look left
  if (valToRemove < subTreeRoot -> data())
  {
    subTreeRoot -> left() = removeHelper(subTreeRoot -> left(), valToRemove);
    return subTreeRoot;
  }
  // Look right
  else if (valToRemove > subTreeRoot -> data())
  {
    subTreeRoot -> right() = removeHelper(subTreeRoot -> right(), valToRemove);
    return subTreeRoot;
  }
  // Found the Node to remove
  else //if valToRemove == curr node
  {
    // Case: Node has no children
    if (subTreeRoot -> left() == nullptr && subTreeRoot -> right() == nullptr)
    {
      return nullptr;
    }
    // Has no right child, but does have a left child
    else if (subTreeRoot -> right() == nullptr)
    {
      return subTreeRoot -> left();
    }
    // Has no left child, but does have a right child
    else if (subTreeRoot -> left() == nullptr)
    {
      return subTreeRoot -> right();
    }
    // has two children
    else
    {
      BST_Node* replacementNodeParent = subTreeRoot;
      BST_Node* replacementNode = replacementNodeParent -> right();
      // if node's sucessor is its right child
      if (replacementNode -> left() == nullptr)
      {
        replacementNodeParent -> right() = nullptr;
      }
      // else look for leftmost node in right sub-tree
      // (that's where the successor will be)
      else //
      {
        while (replacementNode -> left() != nullptr)
        {
          replacementNodeParent = replacementNode;
          replacementNode= replacementNode -> left();
        } 
        //replacementNodeParent
        
        replacementNodeParent ->left() = nullptr;
        subTreeRoot -> data() = replacementNode -> data();
        return subTreeRoot;
          
      }
    }
  }
}

void BST::remove(const int valToRemove)
{
  _root = removeHelper(_root, valToRemove);
  return;
}
