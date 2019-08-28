struct node
{
    int value;
    node * next;
};

class linked_list
{
    public:
        linked_list();
        void display();
        void add_front(int);
        void add_back(int);
        void display_last(void);
        void display_alternating(void);
        void insert_second(int);
        void insert_behind_tail(int);
    private:
        node * head;
};
