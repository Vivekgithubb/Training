POINTER
int x = 10;
int *p = &x; // this works , *p stores address of an int adress since int\*p
int \*\*p = &x; // this wont work , since it should point(store address of ) to a pointer of type int

int x = 10;
int \*y = &x;
int \*\*p = &y; // this works

int x = 10;
float \*p = &x; // this we can store but we wont be able to access the value therefore it gives error

float x = 10;
float \*p = &x; // this works

int x = 10;
void _p = &x; //we can do this , its just free emtpy space it can store anything
(int _) p //we need to do this to access the value , ie we need to type cast

NULL
NULL is a macro , where all NULL values are replaced by 0
nullptr is a special type which points to null value , it performs type checking , it cannot be directly assigned any value

BOOL
for the reason of memeory alignment the size of bool is 1byte , even though their size is 1bit , 1byte = 8 bits


STRUCT
the size of struct is 16 not 12 cause the struct gives the value of max data type
struct node {
int val ; 4 + 4 bytes of padding;
double val;
}

now the size is 12 since double is in the beigning it can go from 8 to 4 , but not from 4 to 8
struct node {
double val;
int val ;
}
