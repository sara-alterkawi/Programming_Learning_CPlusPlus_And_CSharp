#pragma once
#include <iostream>
#include "clsDate.h"
#include "queue"
#include "stack"
using namespace std;
// clsQueueLine
class clsQueueLine {
private:
    // Stores the total number of tickets issued.
    short _TotalTickets = 0;
    // Stores the average service time for each client.
    short _AverageServeTime = 0;
    // Stores the prefix used for generating ticket numbers.
    string _Prefix = "";
    // clsTicket
    class clsTicket {
    private:
        // Ticket number.
        short _Number = 0;
        // Queue prefix.
        string _Prefix;
        // Date and time when the ticket was issued.
        string _TicketTime;
        // Number of clients waiting when the ticket was issued.
        short _WaitingClients = 0;
        // Average service time per client.
        short _AverageServeTime = 0;
        // Expected waiting/service time for this ticket.
        short _ExpectedServeTime = 0;
    public:
        // Creates a new ticket with its queue information.
        clsTicket(string Prefix, short Number,
            short WaitingClients, short AverageServeTime) {
            _Number = Number;
            // Store the current system date and time.
            _TicketTime = clsDate::GetSystemDateTimeString();
            _Prefix = Prefix;
            _WaitingClients = WaitingClients;
            _AverageServeTime = AverageServeTime;
        }
        // Returns the ticket prefix.
        string Prefix() {
            return _Prefix;
        }
        // Returns the ticket number.
        short Number() {
            return _Number;
        }
        // Returns the complete ticket number.
        // Example: A01, A02, B01...
        string FullNumber() {
            return _Prefix + to_string(_Number);
        }
        // Returns the date and time when the ticket was issued.
        string TicketTime() {
            return _TicketTime;
        }
        // Returns the number of clients waiting
        // when this ticket was issued.
        short WaitingClients() {
            return _WaitingClients;
        }
        // Calculates the expected waiting time for this ticket.
        short ExpectedServeTime() {
            return _AverageServeTime * _WaitingClients;
        }
        // Prints detailed information about the ticket.
        void Print() {
            cout << "\n\t\t\t  _______________________\n";
            cout << "\n\t\t\t\t    " << FullNumber();
            cout << "\n\n\t\t\t    " << _TicketTime;
            cout << "\n\t\t\t    Waiting Clients = "
                << _WaitingClients;
            cout << "\n\t\t\t      Serve Time In";
            cout << "\n\t\t\t       "
                << ExpectedServeTime()
                << " Minutes.";
            cout << "\n\t\t\t  _______________________\n";
        }
    };
public:
    // Queue that stores all waiting tickets.
    queue<clsTicket> QueueLine;
    // Constructor
    clsQueueLine(string Prefix, short AverageServeTime) {
        _Prefix = Prefix;
        _TotalTickets = 0;
        _AverageServeTime = AverageServeTime;
    }
    // IssueTicket
    void IssueTicket() {
        _TotalTickets++;
        clsTicket Ticket(
            _Prefix,
            _TotalTickets,
            WaitingClients(),
            _AverageServeTime
        );
        QueueLine.push(Ticket);
    }
    // Returns the number of clients currently waiting.
    int WaitingClients() {
        return QueueLine.size();
    }
    //  WhoIsNext
    string WhoIsNext() {
        if (QueueLine.empty())
            return "No Clients Left.";
        else
            return QueueLine.front().FullNumber();
    }
    // ServeNextClient
    bool ServeNextClient() {
        if (QueueLine.empty())
            return false;
        QueueLine.pop();
        return true;
    }
    // Returns the number of clients who have already been served.
    short ServedClients() {
        return _TotalTickets - WaitingClients();
    }
    // PrintInfo
    void PrintInfo() {
        cout << "\n\t\t\t _________________________\n";
        cout << "\n\t\t\t\tQueue Info";
        cout << "\n\t\t\t _________________________\n";
        cout << "\n\t\t\t    Prefix = " << _Prefix;
        cout << "\n\t\t\t    Total Tickets = "
            << _TotalTickets;
        cout << "\n\t\t\t    Served Clients = "
            << ServedClients();
        cout << "\n\t\t\t    Waiting Clients = "
            << WaitingClients();
        cout << "\n\t\t\t _________________________\n";
        cout << "\n";
    }
    // PrintTicketsLineRTL
    void PrintTicketsLineRTL() {
        if (QueueLine.empty())
            cout << "\n\t\tTickets: No Tickets.";
        else
            cout << "\n\t\tTickets: ";
        // Copy the queue so the original queue is not modified.
        queue<clsTicket> TempQueueLine = QueueLine;
        // Traverse the temporary queue from front to back.
        while (!TempQueueLine.empty()) {
            clsTicket Ticket = TempQueueLine.front();
            cout << " " << Ticket.FullNumber() << " <-- ";
            TempQueueLine.pop();
        }
        cout << "\n";
    }
    // PrintTicketsLineLTR
    void PrintTicketsLineLTR() {
        if (QueueLine.empty())
            cout << "\n\t\tTickets: No Tickets.";
        else
            cout << "\n\t\tTickets: ";
        // Copy the queue so the original queue is not modified.
        queue<clsTicket> TempQueueLine = QueueLine;
        // Temporary stack used to reverse the ticket order.
        stack<clsTicket> TempStackLine;
        // Move all tickets from the Queue to the Stack.
        while (!TempQueueLine.empty()) {
            TempStackLine.push(TempQueueLine.front());
            TempQueueLine.pop();
        }
        // Print the tickets from the Stack.
        while (!TempStackLine.empty()) {
            clsTicket Ticket = TempStackLine.top();
            cout << " " << Ticket.FullNumber() << " --> ";
            TempStackLine.pop();
        }
        cout << "\n";
    }
    // PrintAllTickets
    void PrintAllTickets() {
        cout << "\n\n\t\t\t       ---Tickets---";
        if (QueueLine.empty())
            cout << "\n\n\t\t\t     ---No Tickets---\n";
        // Copy the queue so the original queue remains unchanged.
        queue<clsTicket> TempQueueLine = QueueLine;
        // Print every ticket in FIFO order.
        while (!TempQueueLine.empty()) {
            TempQueueLine.front().Print();
            TempQueueLine.pop();
        }
    }
};