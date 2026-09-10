// Interfaces: Pure Virtual Functions and Abstract Classes
#include <iostream>
using namespace std;
// Abstract Class / Interface / Contract.
class clsMobile
{
	virtual void Dial(string PhoneNumber) = 0;
	virtual void SendSMS(string PhoneNumber, string Text) = 0;
	virtual void TakePicture() = 0;
};
// Derived Class
class clsIPhone : public clsMobile
{
	//This class signed a contract with clsMobile abstract class therefore it should implement everything in the abstract class.
public:
	void Dial(string PhoneNumber)
	{
	};
	void SendSMS(string PhoneNumber, string Text)
	{
	};
	void TakePicture()
	{
	};
	void MyOwnMethod()
	{
	}
};
// Another Derived Class
class clsSamsung : public clsMobile
{
	//This class signed a contract with clsMobile abstract class therefore it should implement everything in the abstract class
public:
	void Dial(string PhoneNumber)
	{
	};
	void SendSMS(string PhoneNumber, string Text)
	{
	};
	void TakePicture()
	{
	};
};
// Main Function
int main()
{
	clsIPhone IPhone17;
	clsSamsung Note10;
	return 0;
}