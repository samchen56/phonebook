#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H
//#define TWO_POWER_NUM 8
//#define MAX_HASH_TABLE_SIZE 1 << TWO_POWER_NUM
#define MAX_LAST_NAME_SIZE 16

#define OPT 1

typedef struct __PHONE_BOOK_OTHER_ENTRY {
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
} detailentry;

typedef struct __PHONE_BOOK_ENTRY{
    char lastName[MAX_LAST_NAME_SIZE];
    detailentry  *detail;
    struct __PHONE_BOOK_ENTRY *pNext;
} entry;



/*typedef struct __HASH_TABLE {
    struct __PHONE_BOOK_ENTRY *pBottom;
    struct __PHONE_BOOK_ENTRY *pHead;
} hashtable;                                     
*/

entry *findName(char lastname[], entry *pHead);
entry *append(char lastName[], entry *e);

/*entry *findName(char lastname[], hashtable *pHead);
hashtable *append(char lastName[], hashtable *e);
unsigned int BKDRHash(char *str);
*/
#endif