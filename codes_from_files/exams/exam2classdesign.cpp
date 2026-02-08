    #include <iostream>
    #include <string>
    #include <vector>
    #include <ctime>
    #include <cstdlib>
    using namespace std;

    // Dog class

    class Dog {
    private:
        string name;
        string breed;
        int age;
        int id;

        bool validID(int value);

    public:
        Dog(string n, int a, string b, int i);

        // accessors
        string getName();
        string getBreed();
        int getAge();
        int getID();

        // mutators
        void setName(string n);
        void setBreed(string b);
        void setAge(int a);
        void setID(int i);

        // other methods
        int humanAge();
        void display();
    };


    // Dog constructor

    Dog::Dog(string n, int a, string b, int i) {
        name = n;
        breed = b;

        if (a > 0) {
            age = a;
        } else {
            age = 1;          // simple default
        }

        if (validID(i)) {
            id = i;
        } else {
            id = 10000;       // default 5-digit id
        }
    }

    
    // ID validation (5-digit, no leading 0)

    bool Dog::validID(int value) {
        if (value >= 10000 && value <= 99999) {
            return true;
        }
        return false;
    }

    // accessors

    string Dog::getName() {
        return name;
    }

    string Dog::getBreed() {
        return breed;
    }

    int Dog::getAge() {
        return age;
    }

    int Dog::getID() {
        return id;
    }


    // mutators

    void Dog::setName(string n) {
        name = n;
    }

    void Dog::setBreed(string b) {
        breed = b;
    }

    void Dog::setAge(int a) {
        if (a > 0) {
            age = a;
        }
    }

    void Dog::setID(int i) {
        if (validID(i)) {
            id = i;
        }
    }

    // human age = 7 * dog age

    int Dog::humanAge() {
        return age * 7;
    }

    // display all properties

    void Dog::display() {
        cout << "Name:  " << name << endl;
        cout << "Breed: " << breed << endl;
        cout << "Age:   " << age
            << " (Human Age: " << humanAge() << ")" << endl;
        cout << "ID:    " << id << endl;
    }

    // regular C-type functions

    Dog makeRandomDog() {
        string names[5]  = {"Buddy", "Bella", "Rocky", "Luna", "Max"};
        string breeds[5] = {"Husky", "Beagle", "Poodle", "Bulldog", "Lab"};

        int nameIndex  = rand() % 5;
        int breedIndex = rand() % 5;

        string name  = names[nameIndex];
        string breed = breeds[breedIndex];

        int age = (rand() % 15) + 1;          // 1-15 years
        int id  = (rand() % 90000) + 10000;   // 5-digit id

        Dog d(name, age, breed, id);
        return d;
    }

    void printDogs(vector<Dog> &dogs) {
        for (int i = 0; i < (int)dogs.size(); i++) {
            cout << "Dog #" << i + 1 << endl;
            dogs[i].display();
        }
    }

    // main

    int main() {
        srand(time(0));

        vector<Dog> kennel;

        // make 100 random dogs
        for (int i = 0; i < 100; i++) {
            Dog d = makeRandomDog();
            kennel.push_back(d);
        }

        // print them
        printDogs(kennel);

        return 0;
    }