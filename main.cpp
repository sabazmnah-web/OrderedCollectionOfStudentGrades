#include <iostream>
#include "orderedcollection.h"
#include "score.h"

using namespace std;

int main() {
    OrderedCollection<Score> collection;
    collection.AddElement(Score(75));
    collection.AddElement(Score(60));
    collection.AddElement(Score(90));
    collection.AddElement(Score(85));
    collection.AddElement(Score(70));

    collection.RemoveElement(Score(70));

    collection.ResetPosition();
    for (int i = 0; i < collection.Size(); i++) {
        Score temp;
        collection.NextElement(temp);
        temp.Print();
    }

    return 0;
}
