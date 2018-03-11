#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */

entry *findName(char lastName[], entry *pHead)
{
    while (pHead != NULL) {
        if (strcasecmp(lastName, pHead->lastName) == 0)
            return pHead;
        pHead = pHead->pNext;
    }
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    e->pNext = (entry *) malloc(sizeof(entry));
    e = e->pNext;
    strcpy(e->lastName, lastName);
    e->pNext = NULL;

    return e;
}

/*entry *findName(char lastName[], hashtable *pHead)
{
    unsigned int index = BKDRHash(lastName);
    entry *pEntry = (pHead + index)->pHead;
    
    while (pHead != NULL) {
        if (strcasecmp(lastName, pHead->lastName) == 0)
            return pEntry;
        pEntry = pEntry->pNext;
    }
    return NULL;
}

hashtable *append(char lastName[], hashtable *e)
{
    hashtable *pHead = e;
    unsigned int index = BKDRHash(lastName);
    entry *pHead = NULL;
    e += index;
     if (e->pHead == NULL) {
        e->pHead = (entry *) malloc(sizeof(entry));
        pEntry = e->pHead;
        e->pBottom = pEntry;
    } 
    else {
        e->pBottom->pNext = (entry *) malloc(sizeof(entry));
        pEntry = e->pBottom->pNext;
        e->pBottom = pEntry;
    }
    strcpy(pEntry->lastName, lastName);
    pEntry->pDetails = NULL;
    pEntry->pNext = NULL;

    return pHead;
}

unsigned int BKDRhash(char *str)
{
    unsigned int seed = 131;
    unsigned int hash = 0;

    while(*key != '\n' && *key != 0)      
        hash = hash * seed + (*key++);

    return hash % DICLEN;
}*/