#define MAX_STR 60
#define MAX_REG 1000

typedef struct {
    char cif[MAX_STR];
    char name[MAX_STR];
    char lastName[MAX_STR];
    int year;
}PERSON;

PERSON people[MAX_REG];
int position = 0;

