#include "sortedset.h"

#define NodeSize(clientElem)  ((clientElem) + 2 * sizeof(int))

static const int kInitialCapacity = 4;

void SetNew(sortedset *set, int elemSize,
	int (*cmpfn)(const void *, const void *)) {
	
}

static int* findNode(sortedset *set, const void *elem) {

}

bool SetAdd(sortedset *set, const void *elemPtr) {
}


void *SetSearch(sortedset *set, const void *elemPtr) {

}