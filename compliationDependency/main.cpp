#include <memory>
#include <string>

class PersonImpl;
class Data;
class Address;

class Person{
    Person(const std::string& name, const Data& birthday, const Address& addr);
    std::string name()const;
    std::string birthday()const;
    std::string address()const;

private:
    //PersonImpl* pImpl;
    std::shared_ptr<PersonImpl> pImpl;
};
