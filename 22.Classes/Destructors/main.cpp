#include <iostream>
#include <string_view>

class Dog{
    public : 
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
        ~Dog();

    private : 
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};
Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for : " << name << std::endl;
}

void some_func(){
    Dog* p_dog = new Dog("Fluffy","Shepherd",2); // created in heap, pointer though p_dog

    delete p_dog;// Causes for the destructor of Dog to be called
}



int main(){ 

//this one will create a copy, if erase all inside some_func and to ovject will pointer to de same address in p_age and that would ve a disaster, and delete will ve call twice
// Dog dog("Valente", "Caramelo", 5); 
//some_fun(dog)

    some_func();
    

    std::cout << "Done!" << std::endl;
    return 0;
}