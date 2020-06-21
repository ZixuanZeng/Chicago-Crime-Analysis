/*avl.h*/

//
// AVL tree ADT.
//
// Visual Studio 2015 on Windows
// U. of Illinois, Chicago
// CS251, Fall 2016
// HW #7: Solution
//

typedef struct AVLElementType
{
  char IUCR[5];
  char PrimaryDesc[128];
  char SecondaryDesc[128];
} AVLElementType;

typedef struct AVLNode
{
  AVLElementType   value;
  int              height;
  struct AVLNode  *left;
  struct AVLNode  *right;
} AVLNode;

AVLNode *Contains(AVLNode *root, AVLElementType value);
AVLNode *Insert(AVLNode *root, AVLElementType value);

int Count(AVLNode *root);
int Height(AVLNode *root);

void PrintInorder(AVLNode *root);
