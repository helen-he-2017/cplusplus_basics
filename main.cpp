#include <iostream>

using namespace std;

class CArray{
    int size; //元素个数
    int *ptr; //指向数组
public:
    CArray(int s = 0);
    CArray(CArray & a);
    ~CArray();
    void push_back(int v); //尾部添加一个元素
    CArray & operator = (const CArray & a); //深拷贝
    int length(){return size;}
    int & CArray::operator[](int i) //不能用int
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
    a2 = a; //重载=
    for (int i = 0; i<a.length();++i)
        cout << a2[i] << " "; //重载【】
    a2 = a3;
    for (int i = 0, n < a2.length();++i)
        cout < a2[i] << " ";
    cout << endl;
    a[3] = 100;
    CArray a4(a); //复制函数
    for (int i = 0; i<a4.length(),++i)
        cout << a4[i] << " ";
    return 0;
}
