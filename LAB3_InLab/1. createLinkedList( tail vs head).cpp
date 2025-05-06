#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

// Function to create a linked list with n nodes
// and return the head pointer of the list
node *createLinkedList(int n)
{
    node *head = nullptr; // Con trỏ đến node đầu tiên
    node *tail = nullptr; // Con trỏ đến node cuối cùng

    for (int i = 0; i < n; i++)
    {
        // Tạo node mới
        node *newNode = new node;

        // Đọc giá trị cho node mới
        cin >> newNode->data;

        // Thiết lập con trỏ next của node mới là nullptr
        newNode->next = nullptr;

        // Nếu danh sách rỗng, node mới là node đầu tiên
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        // Nếu danh sách không rỗng, thêm node mới vào cuối
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    if (n > 0)
    {
        node *head = createLinkedList(n);
        print(head);
    }
    else
    {
        cout << "Invalid n" << endl;
    }
    return 0;
}
