#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int _data)
    {
        data = _data;
        next = NULL;
    }
};

// Khởi tạo một linked list mới
Node *create_linked_list()
{
    return NULL;
}

// Hiển thị một linked list
void display_linked_list(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty." << endl;
        return;
    }

    Node *current_node = head;
    while (current_node != NULL)
    {
        cout << current_node->data << " ";
        current_node = current_node->next;
    }

    cout << endl;
}

// Kiểm tra xem một linked list có rỗng không
bool is_empty(Node *head)
{
    return head == NULL;
}
// Thêm một phần tử vào đầu danh sách
Node *add_at_start(Node *head, int position, int data)
{
    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;

    return head;
}

// Thêm một phần tử vào cuối danh sách
Node *add_at_end(Node *head, int position, int data)
{
    Node *new_node = new Node(data);

    if (head == NULL)
    {
        return new_node;
    }

    Node *current_node = head;
    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }

    current_node->next = new_node;

    return head;
}

// Xoá phần tử ở đầu danh sách
Node *delete_at_start(Node *head, int position)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    head = head->next;

    delete temp;

    return head;
}

int main()
{
    int choice;
    Node *head = NULL; // Initialize head globally

    do
    {
        cout << "\nLinked List Menu:\n"
             << "1. Create list\n"
             << "2. Display list\n"
             << "3. Add element\n"
             << "4. Delete element\n"
             << "5. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            head = create_linked_list();
            cout << "List created successfully!\n";
            break;
        case 2:
            display_linked_list(head);
            break;
        case 3:
        {
            int position, data;
            cout << "Enter the start or end position (based on 1) and select data " << endl;
            cin >> position >> data;
            head = add_at_start(head, position, data); // Added a function to add at any position
            break;
        }
        case 4:
        {
            int position;
            cout << "Enter position (1-based) to delete: ";
            cin >> position;

            if (position == 1)
            {
                head = delete_at_start(head, position);
            }

            break;
        }
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}