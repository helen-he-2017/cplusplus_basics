#include <iostream>

using namespace std;

class CArray{
    int size; //Ԫ�ظ���
    int *ptr; //ָ������
public:
    CArray(int s = 0);
    CArray(CArray & a);
    ~CArray();
    void push_back(int v); //β�����һ��Ԫ��
    CArray & operator = (const CArray & a); //���
    int length(){return size;}
    int & CArray::operator[](int i) //������int
    {
        return ptr[i];
    };
    };

int main()
{
    CArray a;
    for (int i = 0;i<5;++i)
        a.push_back(i);
    CArray a2, a3;
    a2 = a; //����=
    for (int i = 0; i<a.length();++i)
        cout << a2[i] << " "; //���ء���
    a2 = a3;
    for (int i = 0, n < a2.length();++i)
        cout < a2[i] << " ";
    cout << endl;
    a[3] = 100;
    CArray a4(a); //���ƺ���
    for (int i = 0; i<a4.length(),++i)
        cout << a4[i] << " ";
    return 0;
}
