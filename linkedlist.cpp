// patient in queue
#include <iostream>
using namespace std;

class patient
{
private:
    struct node
    {
        int patientid;
        node* next;
    };

    node* head;

    bool isempty()
    {
        return head == nullptr;
    }

public:
    // Constructor
    patient()
    {
        head = nullptr;
    }

    // Add emergency patient (insert at beginning)
    void addemg(int id)
    {
        node* newnode = new node;
        newnode->patientid = id;
        newnode->next = head;
        head = newnode;

        cout << "Patient added (Emergency)" << endl;
    }

    // Add regular patient (insert at end)
    void regular(int id)
    {
        node* newnode = new node;
        newnode->patientid = id;
        newnode->next = nullptr;

        if (isempty())
        {
            head = newnode;
        }
        else
        {
            node* temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }

        cout << "Patient added (Regular)" << endl;
    }
};

int main()
{
    patient p;

    p.addemg(1);
    p.regular(2);
    p.regular(3);

    return 0;
}
