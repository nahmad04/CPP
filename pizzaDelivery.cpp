#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// class Pizza {
//     private: 
//         string size;
//         string type;
//         vector<string> toppings;
//         vector<float> price;

//     string getSize(){
//         return size;
//     } 

//     string getType(){
//         return type; 
//     }

//     vector<string> getToppings(){
//         return toppings;
//     }

//     vector<float> getPrice(){
//         return price; 
//     }

// };

class Person {
    private:
        int age;
        string name;
        string gender;
    public:
        Person(){
            age = 0;
            name = "Joe Biden";
            gender = "dinosaur";
        };
        Person(int agee, string namee, string genderr){
            age = agee;
            name = namee;
            gender = genderr;
        };
        void tostring(){
            cout <<"My name is " << name << " and I am " << age << " and I am a " << gender << endl;
        }
};

int getAge();
string getName();
bool something();

int main(){
    int age; 
    age = getAge();
    string name;
    name = getName();
    bool isWoman;
    isWoman = something();
    string gender; 
    if (isWoman == false)
    {
        gender = "man";
    } else {
        gender = "woman" ;
    }
    

    Person myPerson = Person(age, name, gender);
    myPerson.tostring();

    Person thePerson = Person();
    thePerson.tostring();
    return 0;
}

int getAge(){
    int age;

    cout << "enter your age";
    cin >> age;
    return age;
}

string getName(){
    string name;
    cout <<"enter your first name";
    cin >> name;
    return name;
}

bool something(){
    bool isWoman = 0;
    cout <<"woman???";
    cin >> isWoman;
    return isWoman;
}