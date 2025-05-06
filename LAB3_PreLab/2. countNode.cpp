#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createLinkedList(int n); // The implementation is provided implicitly
int countNode(node *head)
{
    // Biến đếm số lượng node
    int count = 0;

    // Con trỏ tạm để duyệt qua danh sách
    node *current = head;

    // Duyệt qua từng node trong danh sách
    while (current != nullptr)
    {
        // Tăng biến đếm
        count++;

        // Di chuyển đến node tiếp theo
        current = current->next;
    }

    // Trả về số lượng node đã đếm được
    return count;
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
    cout << endl;
    cout << countNode(head);
    return 0;
}