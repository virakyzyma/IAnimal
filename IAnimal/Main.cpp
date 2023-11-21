#include <iostream>
using namespace std;


struct IAnimal
{
	virtual void Eat() = 0;
	virtual void Move() = 0;
};
struct IFly 
{
	virtual void Fly() = 0;
};
struct ISwim 
{
	virtual void Swim() = 0;
};
class Penguin : IAnimal, ISwim 
{
public:
	virtual void Eat() { cout << "Grass\n"; };
	virtual void Move() { cout << "Move\n"; };
	virtual void Swim() { cout << "Swim\n"; };
};
class Parrot : IAnimal, IFly 
{
public:
	virtual void Eat() { cout << "Meat\n"; };
	virtual void Move() { cout << "Running\n"; };
	virtual void Fly() { cout << "Fly\n"; };
};
class Elephant : IAnimal
{
public:
	virtual void Eat() { cout << "Grass\n"; };
	virtual void Move() { cout << "Move\n"; };
};



int main()
{
	cout << "Penguin";
	cout << endl;
	Penguin Penguin;
	Penguin.Eat();
	Penguin.Move();
	Penguin.Swim();
	

	cout << "\nParrot";
	cout << endl;
	Parrot Parrot;
	Parrot.Eat();
	Parrot.Move();
	Parrot.Fly();

	

	cout << "\nElephant";
	cout << endl;
	Elephant Elephant;
	Elephant.Eat();
	Elephant.Move();
}