typedef struct student{
        int ID;
        struct student *prev, *next;
}student;

student * reverse_linked_list(student *);

