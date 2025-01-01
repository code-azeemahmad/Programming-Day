#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string pizzaPoints(int orders, int price);
void separate(string line, string &name, string &order, int &count);
main()
{
    pizzaPoints(5, 20);
}
string pizzaPoints(int orders, int price)
{

    int count = 0, k = 0, index = 0, ord = 0; // g=1;
    string name = "", order = "", pri = "";
    string line;
    fstream file;
    file.open("task05.txt", ios::in);

    while (getline(file, line))
    {

        separate(line, name, order, count);
        if (!order.empty())
        {
            ord = stoi(order);//string to int
        }
        int length = line.length();
        int pric[100] = {0};
        if (ord >= orders)//if order maximum from limit
        {
            for (int j = count; j < length; j++)//until length
            {

                if (line[j] != ',' && line[j] != '\0')//if comma mean one order
                {
                    pri += line[j];//add in string
                }
                else
                {
                    pric[index] = stoi(pri);
                    cout << pri;//print 
                    pri = "";//reset

                    if (pric[index] >= price)
                    {
                        k++;//count if limit above orders found
                    }
                    index++;
                }
            }
            if (k >= orders)
            {
                cout << name;
                break;
            }
        }
        else
        {
            continue;//skip this iteration
        }
        k = 0;//reset values
        index = 0;
        name = "";
        order = "";
        pri = "";
        ord = 0;
    }
    file.close();
}
void separate(string line, string &name, string &order, int &count)
{

    int i, length = line.length();
    for (i = 0; i < length; i++)
    {
        name += line[i];//separate name
        if (line[i] == ' ')
        {

            for (int j = i + 1; j < length; j++)
            {
                order += line[j];//separate order
                if (line[j] == ' ')
                {
                    cout << order;//store order
                    count = j + 1;//store index where order written in file, ends
                    return;
                }
            }
        }
    }
}