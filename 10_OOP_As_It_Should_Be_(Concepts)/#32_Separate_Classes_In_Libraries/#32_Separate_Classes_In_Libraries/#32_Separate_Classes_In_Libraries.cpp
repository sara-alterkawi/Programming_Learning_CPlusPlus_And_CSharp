// Separate Classes In Libraries
// Define a class named ClsEmployee to represent an employee in a company. The class should have private attributes for the employee's ID, first name, last name, email, phone number, job title, department, and salary. Implement public methods to set and get each attribute, as well as a method to calculate the employee's full name by concatenating the first and last names. Additionally, include a method to send an email to the employee (simulated by printing a message to the console) and a method to send an SMS (also simulated). Finally, create a method to print all the employee's information in a formatted manner.
// Implement a main function to create an instance of the ClsEmployee class, set its attributes, and demonstrate the functionality of the methods by printing the employee's information, sending an email, and sending an SMS.
// ________________________________________
// Employee Info		:
// ________________________________________
// ID		: 10
// Name		: Sara Alterkawi
// Email	: sara.omar.alterkawi@gmail.com
// Phone	: 0706357155
// Title	: Software Engineer
// Department	: IT
// Salary	: 6000
// ________________________________________
// The following message sent successfully to email : sara.omar.alterkawi@gmail.com
// Subject	: Hi
// Body		: How are you ?
// ________________________________________
// The following SMS sent successfully to phone : 0706357155
// How are you ?
// ________________________________________

#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"
using namespace std;

int main()
{
	clsEmployee Employee1(10, "Sara", "Alterkawi", "sara.omar.alterkawi@gmail.com", "0706357155", "Software Engineer", "IT", "6500$");
	Employee1.Print();
	Employee1.SendEmail("Hi", "How are you?");
	Employee1.Print();
	return 0;
}