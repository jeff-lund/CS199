#define RESET "\x1B[0m"
#define GREEN "\x1B[32m"
#define RED "\x1B[31m"
const int SMSIZE = 20;
const int SIZE = 100;
const int LGSIZE = 500;
const int STARS = 20;

struct movie
{
    char title[SIZE];
    char description[LGSIZE];
    char rating[SMSIZE];
    char genre[SIZE];
};

class movie_list
{
  public:
    movie_list();
    ~movie_list();
    void add();
    void remove_title(const char*);
    void display();
    void load_collection();
    void store_collection();
  private:
    movie my_movies[100];
    int num_movies;
};

void read_movie(movie&);
void display_movie(movie&);
int correct(void);
void starprint(int);
