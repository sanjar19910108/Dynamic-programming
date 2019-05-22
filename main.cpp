#include <iostream>
using namespace std;
class Node
{
public:
    int number;
    Node* next;
};
int main()
{
    Node* head = NULL;
    Node* lastPtr = NULL;
    short action = -1;
    while (true)
    {
        cout<<"1. Element qo`shish\n";
        cout<<"2. Ro`yhatni ko`rish\n";
        cout<<"3. Ro`yhat maksimalini topish\n";
        cout<<"4. n-pozitsiyaga element qo`shish\n";
        cout<<"5. Ro`yhat boshiga element qo`shish\n";
        cout<<"6. Ro`yhat boshidan elementni o`chirish\n";
        cout<<"7. n-pozitsiyadagi elementni o`chirish\n";
        cout<<"8. Nusxalash\n";
        cout<<"9. Nusxani chiqarish\n";
        cout<<"10. Ro`yhatni elementlarini sortlash\n";
        cout<<"0. chiqish\n\n";
        cout<<"Yuqoridagi menyudan birini tanlang : ";
        cin>>action;
        if (action == 0)
        {
            system("CLS");
            break;
        }
        if (action == 1)
        {
            system("CLS");
            Node* ptr = new Node;
            int numb = -1;
            cout<<"son kiriting: ";
            cin>>numb;
            ptr->number = numb;
            ptr->next = NULL;
            if (head == 0)
            {
                head = ptr;
                lastPtr = ptr;
                system("CLS");
                continue;
            }
            lastPtr->next = ptr;
            lastPtr = ptr;
            system("CLS");
            continue;
        }
        if (action == 2)
        {
            Node* ptr = NULL;
            system("CLS");
            if (head == 0)
            {
                cout<<"\t!!! ro’yhat bo’sh !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }
            cout<<"* * * * * ro’yhat * * * * *\n\n";

            ptr = head;
            while (1)
            {
                cout<<ptr->number<<" ";
                if (ptr->next == 0) break;
                ptr = ptr->next;
            }
            cout<<"\n\n";
            system("PAUSE");
            system("CLS");
            continue;
        }
        if (action == 3)
        {
            system("CLS");
            Node* p = head;
            Node* q = new Node;
            Node* last = new Node;
            int max=p->number;
            q=head;
            while (p)
            {
                if (max<p->number)
                {
                    max=p->number;
                }
                p=p->next;
            }
            system("CLS");
            cout<<"max="<<max;
            system("pause");
            continue;
        }
        if (action == 4)
        {
            system("CLS");
            Node* p = head;
            Node * q = new Node;
            int numb = -1;
            cout<<"sonni kiriting: ";
            cin>>numb;
            q->number = numb;
            int k;
            cout<<"nechta elementdan keyin kiritasiz k=";
            cin>>k;
            for (int i=0;i<k-1;i++) p=p->next;
            q->next = p->next;
            p->next = q;

        }
        if (action==5)
        {
            system("CLS");
            Node * p = new Node;
            int numb = -1;
            cout<<"son kiriting: ";
            cin>>numb;
            p->number = numb;
            if (head ==NULL)
            {
                p->next = NULL;
                head= p;
            }
            else
            {
                p->next = head;
                head = p;
            }
        }
        if (action==6)
        {
            Node* p = new Node;
            if (head == NULL)
            {
                cout<<"ro'yhat bo'sh";
                system("pause");
                system("CLS");
            }
            else
            {
                p = head;
                head = p->next ;
                delete(p);
            }
        }
        if (action==7)
        {
            Node* p = head;
            Node* q = new Node;
            int k;
            cout<<"Qaysi o`rindagi elementni o`chirmoqchisiz?..";
            cin>>k;
            for (int i=0;i<k-1;i++) p=p->next;
            q = p->next;
            p->next = q->next;
            delete(q);
        }
        if (action==8)
        {
            Node* ptr = NULL;
            system("CLS");
            if (head == 0)
            {
                cout<<"\t!!! ro’yhat bo’sh !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }
            cout<<"* * * * * ro’yhat * * * * *\n\n";
            ptr = head;
            while (1)
            {
                system("CLS");
                Node* ptr1 = new Node;
                ptr1->number = ptr->number;
                ptr1->next =ptr->next;
                if (ptr->next == 0) break;
                ptr = ptr->next;
            }
            cout<<"Muvofaqiyatli nusxalandi\n";
            system("PAUSE");
            system("CLS");
            continue;
        }
        if (action == 9)
        {
            Node* ptr1 = NULL;
            system("CLS");
            if (head == 0)
            {
                cout<<"\t!!! ro’yhat bo’sh !!!\n\n";
                system("PAUSE");
                system("CLS");
                continue;
            }
            cout<<"* * * * * ro’yhat * * * * *\n\n";
            ptr1 = head;
            while (1)
            {
                cout<<ptr1->number<<" ";
                if (ptr1->next == 0) break;
                ptr1 = ptr1->next;
            }
            cout<<"\n\n";
            system("PAUSE");
            system("CLS");
            continue;
        }
        if (action==10)
        {
            system("CLS");
            Node* ptr = NULL;
            ptr = head;

            int a[100];
            int t = 0;

            while (1)
            {
                a[++t] = ptr -> number;
                if (ptr->next == 0) break;
                ptr = ptr->next;

            }
            for (int i=1; i<=t; i++)
                for (int j=1; j<=t; j++)
                    if (a[i]<a[j])
                    {
                        int f = a[i];
                        a[i] = a[j];
                        a[j] = f;
                    }


            ptr = head;
            for (int i=1; i<=t; i++)
            {
                ptr -> number = a[i];
                ptr = ptr -> next;
            }

            cout << "Ro`yhat elemntlari sortlandi!\n\n";
            system("PAUSE");
        }
    }
}
