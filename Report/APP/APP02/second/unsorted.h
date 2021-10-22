#include "ItemType.h" 
// File ItemType.h must be provided by the user of this class. 
//  ItemType.h must contain the following definitions: 
//  MAX_ITEMS:     the maximum number of items on the list 
//  ItemType:      the definition of the objects on the list 
//  RelationType:  {LESS, GREATER, EQUAL}
//  Member function ComparedTo(ItemType item) which returns 
//       LESS, if self "comes before" item 
//       GREATER, if self "comes after" item 
//       EQUAL, if self and item are the same 

class UnsortedType
{
public:
  UnsortedType();
  // Constructor
  bool IsFull() const;
  // Function:  Determines whether list is full.
  // Pre:  List has been initialized.
  // Post: Function value = (list is full)

  int LengthIs() const;
  // Function: Determines the number of elements in list.
  // Pre:  List has been initialized.
  // Post: Function value = number of elements in list

  void RetrieveItem(ItemType& item, bool& found);
  // Function: Retrieves list element whose key matches item's key (if
  //           present).
  // Pre:  List has been initialized.
  //       Key member of item is initialized.
  // Post: If there is an element someItem whose key matches
  //       item's key, then found = true and item is a copy of
  //       someItem; otherwise found = false and item is unchanged.
  //       List is unchanged.

  void InsertItem(ItemType item);
  // Function: Adds item to list.
  // Pre:  List has been initialized.
  //       List is not full.
  //       item is not in list.
  // Post: item is in list.

  void DeleteItem(ItemType item);
  // Function: Deletes the element whose key matches item's key.
  // Pre:  List has been initialized.
  //       Key member of item is initialized.
  //       One and only one element in list has a key matching item's key.
  // Post: No element in list has a key matching item's key.


    // 문제1: 재작성한 DeleteItem
    void DeleteItem_a(ItemType item);
        //Function: 아이템을 찾을 때까지 하나씩 체크한 후, 찾으면 삭제를 함
        //Precondition: 아이템이 초기화되어 있어야함
        //Postcondition: 아이템이 리스트에 존재하지 않을 경우에도 리스트는 변화가 없음

    // 문제2: 재작성한 DeleteItem
    void DeleteItem_c(ItemType item);
        //Function: 아이템을 찾을 때까지 하나씩 체크한 후, 찾으면 삭제를 함
        //Precondition: 아이템이 초기화되어 있어야함
        //Postcondition: 삭제할 요소가 여러개 있어도 모두 삭제를 함.

    
    
  void ResetList();
  // Function: Initializes current position for an iteration through the list.
  // Pre:  List has been initialized.
  // Post: Current position is prior to list.

  void GetNextItem(ItemType& item);
  // Function: Gets the next element in list.
  // Pre:  List has been initialized and has not been changed since last call.
  //       Current position is defined.
  //       Element at current position is not last in list.
  //	     
  // Post: Current position is updated to next position.
  //       item is a copy of element at current position.

private:
  int length;
  ItemType info[MAX_ITEMS];
  int currentPos;
};
