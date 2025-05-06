#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

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

void replace(node *head, int position, int value)
{
    // Nếu vị trí âm hoặc danh sách rỗng, không làm gì cả
    if (position < 0 || head == nullptr)
    {
        return;
    }

    // Duyệt đến node ở vị trí position
    node *current = head;
    int currentPos = 0;

    while (current != nullptr && currentPos < position)
    {
        current = current->next;
        currentPos++;
    }

    // Nếu đã đến cuối danh sách mà chưa đến vị trí cần thay thế
    // (nghĩa là position >= số lượng node), không làm gì cả
    if (current == nullptr)
    {
        return;
    }

    // Thay thế giá trị tại vị trí position
    current->data = value;
}

void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    int pos, val;
    cin >> pos >> val;
    replace(head, pos, val);
    print(head);
    return 0;
}
