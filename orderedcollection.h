#ifndef ORDEREDCOLLECTION_H_INCLUDED
#define ORDEREDCOLLECTION_H_INCLUDED

const int MAX_ITEMS = 5;

template <class ItemType>
class OrderedCollection {
public:
    OrderedCollection();
    void Clear();
    bool Full();
    int Size();
    void AddElement(ItemType);
    void RemoveElement(ItemType);
    void FindElement(ItemType&, bool&);
    void ResetPosition();
    void NextElement(ItemType&);

private:
    int itemCount;
    ItemType elements[MAX_ITEMS];
    int currentIndex;
};

#include "orderedcollection.cpp"
#endif // ORDEREDCOLLECTION_H_INCLUDED
