#include<stdio.h>
#include<string.h>

struct class
{
	char name[20];
	int roll_no;
	char g;
};

void using_structure(struct class str);
void using_pointer (struct class *ptr);


int main()
{
	struct class str={"revathy venugopal",07,'f'};
	struct class *ptr;
	ptr=&str;
	using_structure(str);
	using_pointer(ptr);
	return 0;
}

void using_pointer (struct class *ptr)
{
	printf("using pointers-----------------\n");
	printf("name:%s\n",ptr->name);
	printf("roll_no:%d\n",ptr->roll_no);
	printf("gender:%c\n",ptr->g);
}

void using_structure(struct class str)
{
	printf("using structures-----------------\n");
	printf("name: %s \n",str.name);
	printf("roll no:%d \n",str.roll_no);
	printf("gender: %c \n",str.g);
}



	
	