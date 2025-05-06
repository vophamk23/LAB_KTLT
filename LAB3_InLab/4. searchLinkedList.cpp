#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

int searchLinkedList(node *head, int key)
{
    // Kiểm tra nếu danh sách rỗng
    if (head == nullptr)
    {
        return -1;
    }

    // Duyệt qua từng node trong linked list
    node *current = head;
    int position = 0;

    while (current != nullptr)
    {
        // Nếu tìm thấy giá trị key, trả về vị trí hiện tại
        if (current->data == key)
        {
            return position;
        }

        // Chuyển đến node tiếp theo và tăng vị trí
        current = current->next;
        position++;
    }

    // Nếu không tìm thấy key trong linked list
    return -1;
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
    print(head);
    int m;
    cin >> m;
    cout << searchLinkedList(head, m);
    return 0;
}
