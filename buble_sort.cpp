#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;

void input()
{
    int d;
    while (true)
    {
        cout << "Masukan banyaknya element pada array: ";
        cin >> n;
        if (n <= 20)
            break;
    else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
cout << endl;
cout << "====================" << endl;
cout << "masukan element array" << endl;
cout << "===================" << endl;

for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr[i];
    } 
}

void bubbleshortArray()

{
    int pass = 1;

    do
    {
        for (int j = 0; j <= n - 1 - pass; j++) 
        {
            if (arr[j] > arr[j = 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        } 
        pass += 1;
        
        cout << "\nPass " << pass - 1 << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
        /* code */
    } while (pass <= n -1); 
}

void display()
{
    cout << endl;
    cout << "============================" << endl;
    cout << "elemennt array yang telah tersusun" << endl;
    cout << "============================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
        if (j < n - 1)
        {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{

    input();

    bubbleshortArray();
    display();

    system("pause");
    return 0;
}