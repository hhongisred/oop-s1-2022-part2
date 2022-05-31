#include<string>
#include<iostream>
#include"animal.h"

using namespace std;
class animalTest : public animal {
    public:
    animalTest(std::string name, int volume) : animal(name, volume) {
    }
    string get_name(){
        return name;
    }
};
int main()
{

    animalTest a1("pig",500), a2("duck",20),a3("chicken",15);
    cout<<"animal:"<<a1.get_name()<<",volume:"<<a1.get_volume()<<endl;


}