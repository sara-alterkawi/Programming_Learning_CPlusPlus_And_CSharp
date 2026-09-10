/*
    Queue Line Management System
    ----------------------------
    This project simulates a real-world customer queue system,
    such as a bank, service center, or customer service office.
    Each queue has:
    - A unique prefix used to identify its tickets.
    - A total number of issued tickets.
    - An average service time for each client.
    - A queue that stores all waiting tickets.

    Ticket System:
    --------------
    Each ticket contains:
    - Ticket number and prefix.
    - The date and time when the ticket was issued.
    - The number of clients waiting before this ticket.
    - The expected service time.
    Example:
        A01
        A02
        A03
    If A03 is issued while two clients are waiting,
    and the average service time is 10 minutes:
        Expected Serve Time =
        Waiting Clients * Average Serve Time
        2 * 10 = 20 minutes.
    Queue Operations:
    -----------------
    IssueTicket()
        Creates a new ticket and adds it to the end of the queue.
    ServeNextClient()
        Serves and removes the first client in the queue,
        following the FIFO (First In, First Out) principle.
    WaitingClients()
        Returns the number of clients currently waiting.
    ServedClients()
        Returns the number of clients who have already been served.
    WhoIsNext()
        Returns the ticket number of the next client to be served.
    Ticket Display:
    ---------------
    PrintTicketsLineRTL()
        Displays the tickets from the first ticket to the last ticket.
        Example:
        A01 <-- A02 <-- A03 <-- A04 <--
    PrintTicketsLineLTR()
        Uses a temporary Stack to reverse the queue order
        and display the tickets from the last ticket to the first.
        Example:
        A04 --> A03 --> A02 --> A01 -->
    PrintAllTickets()
        Displays detailed information about every ticket
        currently waiting in the queue.
    Queue Information:
    ------------------
    PrintInfo() displays:
    - Queue prefix.
    - Total number of issued tickets.
    - Number of served clients.
    - Number of waiting clients.
    Data Structures Used:
    ---------------------
    Queue:
        Used to store waiting tickets and maintain FIFO order.
    Stack:
        Used temporarily to reverse the queue order when
        displaying the tickets from Left-to-Right.
    clsDate:
        Used to generate the ticket issue date and time.
    The project demonstrates how Queue and Stack data structures
    can be combined to build a practical customer queue system.
*/
#include <iostream>
#include "clsQueueLine.h"
using namespace std;
// Main function
int main() {
    // Create two separate queues with different prefixes
    // and different average service times.
    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscriptionsQueue("B0", 5);
    //==========================================================
    // Pay Bills Queue
    //==========================================================
    // Issue five tickets for the Pay Bills queue.
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    // Display information about the Pay Bills queue.
    cout << "\nPay Bills Queue Info:\n";
    PayBillsQueue.PrintInfo();
    // Display tickets from Right-to-Left.
    // The queue is displayed in its original FIFO order.
    PayBillsQueue.PrintTicketsLineRTL();
    // Display tickets from Left-to-Right.
    // A temporary Stack is used to reverse the ticket order.
    PayBillsQueue.PrintTicketsLineLTR();
    // Display detailed information about all waiting tickets.
    PayBillsQueue.PrintAllTickets();
    // Serve the next client.
    // The first ticket in the queue is removed.
    PayBillsQueue.ServeNextClient();
    // Display queue information after serving one client.
    cout << "\nPay Bills Queue After Serving One Client\n";
    PayBillsQueue.PrintInfo();
    //==========================================================
    // Subscriptions Queue
    //==========================================================
    // Issue three tickets for the Subscriptions queue.
    cout << "\nSubscriptions Queue Info:\n";
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    // Display information about the Subscriptions queue.
    SubscriptionsQueue.PrintInfo();
    // Display tickets from Right-to-Left.
    SubscriptionsQueue.PrintTicketsLineRTL();
    // Display tickets from Left-to-Right using a temporary Stack.
    SubscriptionsQueue.PrintTicketsLineLTR();
    // Display detailed information about all waiting tickets.
    SubscriptionsQueue.PrintAllTickets();
    // Serve the next client.
    // The first ticket in the queue is removed.
    SubscriptionsQueue.ServeNextClient();
    // Display queue information after serving one client.
    cout << "\nSubscriptions Queue After Serving One Client\n";
    SubscriptionsQueue.PrintInfo();

    return 0;
}