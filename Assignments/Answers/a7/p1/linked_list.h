struct list
{
	int info;
	struct list* next;
};

struct list* push_front(struct list* userList, int val);

struct list* push_back(struct list* userList, int val);

struct list* remove_first(struct list* userList);

struct list* dispose_list(struct list* userList);

void print_list(struct list* userList);