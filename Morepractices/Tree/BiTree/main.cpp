#include <iostream>

using namespace std;

template<class T>
struct Node{
    T data;
    Node<T> *lchild,rchild;
};

template<class T>
class BiTree{
private:
    Node<T> *root;  //ָ����ڵ��ͷָ��
    Node<T> *create(Node<T> *bt);   //���캯������
    void release(Node<T> *bt);      //������������
    void preOrder(Node<T> *bt);     //ǰ���������
    void inOrder(Node<T> *bt);      //�������
    void postOrder(Node<T> *bt);    //�������
    void levelOrder();              //�������

public:
    BiTree(){root=create(root);}    //����һ�ö�����
    ~BiTree(){release(root);}       //��������
    void preOrder(){preOrder(root);}   //ǰ�����
    void inOrder(){inOrder(root);}      //�������
    void postOrder(){postOrder(root);}
};

//�ݹ鷽��ʵ��ǰ�����
template<class T>
void BiTree<T>::preOrder(Node<T> *bt){
    if(bt==NULL)return;     //�ݹ���õĽ�������
    else{
        cout<<bt->data<<" ";
        preOrder(bt->lchild);
        preOrder(bt->rchild);
    }
}

void BiTree<T>::inOrder(Node<T> *bt){

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
