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
node *insertNode(node *head, node *newNode, int position)
{
    // Nếu position <= 0, không làm gì cả và trả về head hiện tại
    if (position <= 0)
    {
        return head;
    }

    // Nếu position = 1 hoặc danh sách rỗng, chèn vào đầu danh sách
    if (position == 1 || head == nullptr)
    {
        newNode->next = head;
        return newNode; // Trả về node mới làm head mới
    }

    // Trường hợp khác, tìm vị trí để chèn
    node *current = head;
    int currentPosition = 1;

    // Tìm node trước vị trí cần chèn hoặc node cuối cùng
    while (current->next != nullptr && currentPosition < position - 1)
    {
        current = current->next;
        currentPosition++;
    }

    // Chèn node mới vào sau node current
    newNode->next = current->next;
    current->next = newNode;

    // Trả về head ban đầu vì chưa thay đổi
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
    node *head = createLinkedList(n);
    node *newNode = new node();
    cin >> newNode->data;
    int position = 0;
    cin >> position;
    head = insertNode(head, newNode, position);
    print(head);
    return 0;
}
