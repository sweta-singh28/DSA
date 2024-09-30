#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

class SinglyLinkedListNode
{
public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList
{
public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;

    SinglyLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_node(int node_data)
    {
        SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

        if (!this->head)
        {
            this->head = node;
        }
        else
        {
            this->tail->next = node;
        }

        this->tail = node;
    }
};

void print_singly_linked_list(SinglyLinkedListNode *node, string sep, ofstream &fout)
{
    while (node)
    {
        fout << node->data;

        node = node->next;

        if (node)
        {
            fout << sep;
        }
    }
}

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void fun(SinglyLinkedListNode *head, int &positionFromTail, int &ans)
{
    if (head == nullptr)
    {
        return;
    }
    fun(head->next, positionFromTail, ans);
    // list ke end pe pahuch ke iss position pe aagya code pe kyuki woh return karta gya
    if (positionFromTail == 0)
    {
        ans = head->data;
    }
    positionFromTail--;
}
int getNode(SinglyLinkedListNode *llist, int positionFromTail)
{
    int ans = -1;
    fun(llist, positionFromTail, ans);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string tests_temp;
    getline(cin, tests_temp);

    int tests = stoi(ltrim(rtrim(tests_temp)));

    for (int tests_itr = 0; tests_itr < tests; tests_itr++)
    {
        SinglyLinkedList *llist = new SinglyLinkedList();

        string llist_count_temp;
        getline(cin, llist_count_temp);

        int llist_count = stoi(ltrim(rtrim(llist_count_temp)));

        for (int i = 0; i < llist_count; i++)
        {
            string llist_item_temp;
            getline(cin, llist_item_temp);

            int llist_item = stoi(ltrim(rtrim(llist_item_temp)));

            llist->insert_node(llist_item);
        }

        string position_temp;
        getline(cin, position_temp);

        int position = stoi(ltrim(rtrim(position_temp)));

        int result = getNode(llist->head, position);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}