#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long  int n, i, j;
    string a;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        long long int s = 0, s1 = 0, s2 = 0, number = 0, s3 = 0;
        long k = 0, l = 0, l1 = 0;
        cin >> a;
        for (j = 0; j < a.size(); j++)
        {
            if (a.size() == 1)
            {
                l = a[j] - 96;
                l1 = 1;
            }
            else
                if (a.size() % 2 != 0)
                {
                    k = 1;
                    s = abs((a[0] - 96) - (a[a.size() - 1] - 96));
                    s3 = ((a[0] - 96) + (a[a.size() - 1] - 96));
                    s1 += (a[j] - 96);
                    number = s + s1;
                }
                else k = 0;
            if (a.size() % 2 == 0) {
                s2 += (a[j] - 96);
            }
        }
        if (k == 1)
        {
            cout << "Alice " << number - s3 << "\n";
        }
        else if (l1 == 1)
        {
            cout << "Bob " << l << "\n";
        }
        else
            cout << "Alice " << s2 << "\n";
    }
    return 0;
}
/*5
aba
abc
cba
n
codeforces
*/

/*Alice 2
Alice 4
Alice 4
Bob 14
Alice 93
*/
/*� ������ ������ "aba"????Alice"aba"?"a"???Bob"a"?""
.����� ���������� ����� ����� ����� 1 + 2 = 3
.����� ���������� ����� ���� ����� 1
.

�� ������ ������ "abc"????Alice"abc"?"a"???Bob"a"?""
.����� ���������� ����� ����� ����� 2 + 3 = 5
.����� ���������� ����� ���� ����� 1
.

� ������� ������ "cba"????Alice"cba"?"a"???Bob"a"?""
.����� ���������� ����� ����� ����� 3 + 2 = 5
.����� ���������� ����� ���� ����� 1
.

� �������� ������ "n"????Alice"n"?"n"???Bob"n"?""
.����� ���������� ����� ����� ����� 0
.����� ���������� ����� ���� ����� 14
.

� ����� ������ "codeforces"????Alice"codeforces"?""
.����� ���������� ����� ����� ����� 3 + 15 + 4 + 5 + 6 + 15 + 18 + 3 + 5 + 19 = 93
.����� ���������� ����� ���� ����� 0
*/