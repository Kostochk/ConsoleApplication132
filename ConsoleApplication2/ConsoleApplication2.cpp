#include <iostream>

using namespace std;

class IMovable {
public:
    virtual void Move() = 0;
};

class IDrivable {
public:
    virtual void Drive() = 0;
};

class IFillable {
public:
    virtual void Fill() = 0;

};

class IFlyable {
public:
    virtual void Fly() = 0;
};

class IHuman {
public:
    virtual void Eat() = 0;
    virtual void Sleep() = 0;
};

class ICar {
public:
    virtual void EngieOn() = 0;
};
class IShip {
public:
    virtual void WalkOnRace() = 0;
};
class IFly {
public:
    virtual void FlyOnRace() = 0;
};


class Person : public IMovable, public IHuman {
public:
    void Move() override {
        cout << "Person can move" << endl;
    }
    void Eat() override {
        cout << "Person can eat" << endl;
    }
    void Sleep() override {
        cout << "Person can sleep" << endl;
    }
};
class Transport : public IDrivable, public ICar {
public:
    void Drive() override {
        cout << "car can move" << endl;
    }
    void EngieOn() override {
        cout << "Car can ON" << endl;
    }

};
class FillTransport : public IFillable, public IShip {
public:
    void Fill() override {
        cout << "ship can fill" << endl;
    }
    void WalkOnRace() override {
        cout << "Ship can walk on race" << endl;
    }

};
class FlyTransport : public IFlyable, public IFly {
public:
    void Fly() override {
        cout << "plane can fly" << endl;
    }
    void FlyOnRace() override {
        cout << "plane can fly on race" << endl;
    }

};

int main()
{
    //IHuman* ptr = new Person();
    //
    //ptr->Eat();
    //ptr->Sleep();

    Person obj = Person();
    obj.Eat();
    obj.Sleep();
    obj.Move();

    Transport obj1 = Transport();
    obj1.EngieOn();
    obj1.Drive();

    FillTransport obj2 = FillTransport();
    obj2.Fill();
    obj2.WalkOnRace();

    FlyTransport obj3 = FlyTransport();
    obj3.Fly();
    obj3.FlyOnRace();
}

