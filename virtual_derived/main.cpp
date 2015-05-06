class Animal {
 public:
  virtual void eat(){}
};

class Mammal : public virtual Animal {
 public:
  virtual void breathe(){}
};

class WingedAnimal : public virtual Animal {
 public:
  virtual void flap(){}
};

// A bat is a winged mammal
class Bat : public  Mammal, public  WingedAnimal {
};

int main(){
    Bat bat;
    bat.eat();

    return 0;
}
