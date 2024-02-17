#include <iostream>
using namespace std;

class Person
{
private:// модификатор доступен только в нутри класса и его методах
    char namech;
public: // модификатор доступа к членам или полям класса (открыт для всех)
    string name;  // поля класса или члены класса
    unsigned int age;
    //Person(string p_name,unsigned int p_age) // конструктор класса c параметрами
    //{
    //    name = p_name;
    //    age = p_age;
    //    cout << " Person created  param\n";
    //};
    //Person(string p_name) 
    //{
    //    name = p_name;
    //    age = 18;
    //    cout << " Person created  one param\n";
    //};
    //Person()// конструктор без параметров
    //{
    //    name = "Undefined";
    //    age = 18;
    //    cout << " Person created no param\n";
    //};

    Person(string p_name , unsigned int p_age) // конструктор класса c параметрами
    {
        name = p_name;
        age = p_age;
        cout << " First constructor\n";
    };
    Person(string p_name) :Person(p_name, 18) { cout << "Two construcktor\n"; }// Делегирование конструкторов
    Person() :Person(string("Undefined")) { cout << "Third construcktor\n"; }


    void print()      // функции-члены класса или методы класса
    {
        cout << "Name : " << name << "\t Age : " << age << endl;
    }
};


int main()
{
    //Person humen;  // создание обьекта класса Person
    //humen.name = "Tom";
    //humen.age = 28;
    //humen.print();
    //Person humen2;
    //humen2.age = 28;
    //humen2.print();
    //Person humen3;
    //humen3.name = "Nini";
    //humen3.print();
    //Person* ptr = &humen; // указате на обьект класса Person
    //ptr->name = "BRED";
    //ptr->age = 35;
    //ptr->print();
    /* string nameuser = humen1.name;
    unsigned int ageuser = humen1.age;
    cout << "Name : " << nameuser << "\t Age : " << ageuser << endl;*/


 /*   Person tom("Tom", 16);
    Person pit("Piter", 34);
    Person bred("Bredli", 25);
    tom.print();
    pit.print();
    bred.print();*/

    Person Lusi("Lusi", 38);
    Lusi.print();
    Person Bob{ "Bob" };
    Bob.print();
    Person Sam;
    Sam.print();
}


