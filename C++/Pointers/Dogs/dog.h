class dog
{
    public:
        dog();
        ~dog();
        dog(const char*, const char*, const char*);
        void display(void);
        void read(void);
        void set_friend(dog*);

    private:
        char *name;
        char *breed;
        char *trick;
        dog *best_friend;
};
