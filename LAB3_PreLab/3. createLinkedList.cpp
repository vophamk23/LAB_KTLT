#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createLinkedList(int n)
{
    // Khởi tạo head là nullptr (ban đầu danh sách liên kết rỗng)
    node *head = nullptr;

    // Biến tạm để lưu giá trị đọc vào
    int value;

    // Đọc n phần tử và thêm vào đầu danh sách liên kết
    for (int i = 0; i < n; i++)
    {
        // Đọc giá trị từ đầu vào chuẩn
        cin >> value;

        // Tạo node mới
        node *newNode = new node;

        // Gán giá trị cho node mới
        newNode->data = value;

        // Thêm node mới vào đầu danh sách liên kết
        newNode->next = head;
        head = newNode;
    }

    // Trả về con trỏ đến node đầu tiên của danh sách liên kết
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