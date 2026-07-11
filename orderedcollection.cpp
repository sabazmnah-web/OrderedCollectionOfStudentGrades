#ifndef ORDEREDCOLLECTION_CPP_INCLUDED
#define ORDEREDCOLLECTION_CPP_INCLUDED

#include "orderedcollection.h"

template <class ItemType>
OrderedCollection<ItemType>::OrderedCollection() {
    itemCount = 0;
    currentIndex = -1;
}

template <class ItemType>
void OrderedCollection<ItemType>::Clear() {
    itemCount = 0;
}

template <class ItemType>
bool OrderedCollection<ItemType>::Full() {
    return (itemCount == MAX_ITEMS);
}

template <class ItemType>
int OrderedCollection<ItemType>::Size() {
    return itemCount;
}

template <class ItemType>
void OrderedCollection<ItemType>::ResetPosition() {
    currentIndex = -1;
}

template <class ItemType>
void OrderedCollection<ItemType>::NextElement(ItemType& item) {
    currentIndex++;
    item = elements[currentIndex];
}

template <class ItemType>
void OrderedCollection<ItemType>::AddElement(ItemType item) {
    int location = 0;
    bool moreToSearch = (location < itemCount);

    while (moreToSearch) {
        if (item > elements[location]) {
            location++;
            moreToSearch = (location < itemCount);
        } else {
            moreToSearch = false;
        }
    }

    for (int index = itemCount; index > location; index--) {
        elements[index] = elements[index - 1];
    }
    elements[location] = item;
    itemCount++;
}

template <class ItemType>
void OrderedCollection<ItemType>::RemoveElement(ItemType item) {
    int location = 0;
    while (item != elements[location]) {
        location++;
    }
    for (int index = location + 1; index < itemCount; index++) {
        elements[index - 1] = elements[index];
    }
    itemCount--;
}

template <class ItemType>
void OrderedCollection<ItemType>::FindElement(ItemType& item, bool& found) {
    int midPoint;
    int first = 0;
    int last = itemCount - 1;
    bool moreToSearch = (first <= last);
    found = false;

    while (moreToSearch && !found) {
        midPoint = (first + last) / 2;
        if (item < elements[midPoint]) {
            last = midPoint - 1;
            moreToSearch = (first <= last);
        } else if (item > elements[midPoint]) {
            first = midPoint + 1;
            moreToSearch = (first <= last);
        } else {
            found = true;
            item = elements[midPoint];
        }
    }
}

#endif // ORDEREDCOLLECTION_CPP_INCLUDED
