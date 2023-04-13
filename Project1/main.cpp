#include <iostream>
#include <string>
#include <algorithm>
#include"head.h"

using namespace std;


int main() {
    int n;
    cout << "�������ַ�������: ";
    cin >> n;

    // ��̬�����ڴ����洢�ַ���
    string* plaintext = new string[n];
    string* ciphertext = new string[n];

    // ���������ַ���
    for (int i = 0; i < n; i++) {
        cout << "������� " << i + 1 << " ���ַ���: ";
        cin >> plaintext[i];
    }

    // �������ַ������м���
    for (int i = 0; i < n; i++) {
        ciphertext[i] = encryptDecrypt(plaintext[i]);
    }

    // ����ĸ˳��������ַ�����������
    sort(ciphertext, ciphertext + n, compare);

    // ��������������ַ���
    cout << "�����������ַ���: " << endl;
    for (int i = 0; i < n; i++) {
        cout << ciphertext[i] << endl;
    }

    // �������ַ������н���
    for (int i = 0; i < n; i++) {
        plaintext[i] = encryptDecrypt(ciphertext[i]);
    }

    // ������ܺ�������ַ���
    cout << "���ܺ�������ַ���: " << endl;
    for (int i = 0; i < n; i++) {
        cout << plaintext[i] << endl;
    }

    // �ͷŶ�̬������ڴ�
    delete[] plaintext;
    delete[] ciphertext;

    return 0;
}
