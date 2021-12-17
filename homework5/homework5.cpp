
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int simple(int n);
string to_base2(int n);
string reverse(string str);
int main()
{
    int n = 1;
    while (n)
    {
        cin >> n;
        
        if (n == 1)
        {
            int a, b;
            cin >> a >> b;
            while (a != 0 && b != 0)
            { 
                if (a > b)
                    a = a % b;
                else
                    b = b % a;
            }
            cout << a + b;
            cout << endl;
        }
        if (n == 2)
        {
            int end;
            cin >> end;
            for (int i = 2; i < end; i++)
                if (simple(i))
                    cout << i << " ";
            cout << endl;
        }
        if (n == 3)
        {
            cout << " 12 " << endl;
            std::string line;

            std::ifstream in("D:\\file2\\t.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
                while (getline(in, line))
                {
                    std::cout << line << std::endl;
                }
            }
            in.close();     // закрываем файл
            cout << " 13 " << endl;
            string outf;
            cin >> outf;
                    
            std::ofstream out("D:\\file2\\t.txt", std::ios::app); // поток для записи
            if (out.is_open())
            {
                out << outf << std::endl;
            }
            out.close();

        }
        if (n == 4)
        {
            int maxcount = 0;
            cout << "19" << endl;
            int amount, sum = 0;
            cin >> amount;
            int* classmates = new int[amount];
            
            for (int i = 0; i < amount; i++)
                cin >> classmates[i];
            cout << endl;

            for (int i = 0; i < amount; i++)
                sum = sum + classmates[i];
            
            float end = sum / amount;
            cout << end << endl;1
            for (int i = 0; i < amount; i++)
            {
                if (classmates[i] > end)
                {
                    maxcount++;
                }
            }
            cout << endl << maxcount << endl;

            cout << "28" <<  endl;

            int num, sn = 0;
            cin >> num;
            cout << endl;
            
            while(num)
            {
                sn = sn + num % 10;
                num /= 10;
            }

            cout << sn << endl;


        }
        if (n == 5)
        {
            cout << "15" << endl;
            std::string line;
            string outf;

            std::ifstream in("D:\\file2\\t2.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
                while (getline(in, line))
                {
                    // Use std::stoi() to convert string to integer
                    int res = stoi(line);
                    
                    
                    outf = to_base2(res);
                    outf = reverse(outf);

                    std::ofstream out("D:\\file2\\t3.txt", std::ios::app); // поток для записи
                    if (out.is_open())
                    {
                        out << outf << std::endl;
                    }
                    out.close();
                }
            }
            in.close();     // закрываем файл
        }
    }


    return 0;
}


int simple(int n )
{
    for (int i = 2; i <= n / 2; i++) if ((n % i) == 0) return 0;
    return 1;
}
string to_base2(int n)
{
    string base;
    
    while (n)
    {
        base += to_string(n % 2);
        n /= 2;
    }
    return base;
}
string reverse(string str)
{
    string base;
    int size = 0;
    for (int i = 0; i < str.size(); i++)
    {
        size++;
    }
    for (int i = size; i >= 0; i--)
    {
        base += str[i];
    }
    return base;
}