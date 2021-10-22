#pragma once
#include <fstream>
const int MAX_ITEMS = 100;
enum RelationType  {LESS, GREATER, EQUAL};

class ItemType 
{
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  void Print(std::ostream&) const;
  void Initialize(int number);
    int GetItem(); // APP02에서 추가한 함수
private:
  int value;
};
 
