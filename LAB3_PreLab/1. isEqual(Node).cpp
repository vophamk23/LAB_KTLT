#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createLinkedList(int n); // The implementation is provided implicitly
bool isEqual(node *head1, node *head2)
{
    // Con trỏ để duyệt qua hai danh sách
    node *current1 = head1;
    node *current2 = head2;

    // Duyệt qua cả hai danh sách đồng thời
    while (current1 != nullptr && current2 != nullptr)
    {
        // Nếu giá trị của hai node hiện tại khác nhau, danh sách không bằng nhau
        if (current1->data != current2->data)
        {
            return false;
        }

        // Di chuyển đến node tiếp theo trong cả hai danh sách
        current1 = current1->next;
        current2 = current2->next;
    }

    // Nếu một trong hai danh sách còn node trong khi danh sách kia đã kết thúc
    // thì hai danh sách có độ dài khác nhau, do đó không bằng nhau
    if (current1 != nullptr || current2 != nullptr)
    {
        return false;
    }

    // Nếu đã duyệt hết cả hai danh sách mà không tìm thấy sự khác biệt
    // thì hai danh sách là bằng nhau
    return true;
}
int main()
{
    int n = 0;
    cin >> n;
    node *head1 = createLinkedList(n);
    int m = 0;
    cin >> m;
    node *head2 = createLinkedList(m);
    cout << isEqual(head1, head2) << endl;
    return 0;
}
