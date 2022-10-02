#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
k:
    int b_amount = 0, c_amount = 0, m_amount = 0, bc_amount = 0;
    int b_count = 0, c_count = 0, m_count = 0, bc_count = 0;
    int Total_amount = 0;
    int Total_vehicle = 0;
    int x;
h:
    system("cls");
    cout << "                    .......\"PARKING MANAGEMENT SYSTEM\".......            " << endl
         << endl
         << "                       ....... Choice Vehicle Type .......                " << endl
         << "1.   Bus" << endl
         << "2.   Car" << endl
         << "3.   Motorcycle" << endl
         << "4.   Bicycle" << endl
         << "5.   Check Status" << endl
         << "6.   Delete Vehicle" << endl
         << "7.   Reset" << endl
         << "8.   Exit" << endl
         << "Enter Your Choice" << endl;
    cin >> x;

    switch (x)
    {
    case 1:
        if (Total_vehicle < 100)
        {
            cout << "....... Bus Parked ......."
                 << " ";
            b_count++;
            Total_vehicle++;
            b_amount += 150;
            Total_amount += 150;
        }
        else
        {
            cout << "....... Parking is full .......";
        }
        break;
    case 2:
        if (Total_vehicle < 100)
        {
            cout << "....... Car parked ......."
                 << " ";
            c_count++;
            Total_vehicle++;
            c_amount += 100;
            Total_amount += 100;
        }
        else
        {
            cout << "....... Parking is full .......";
        }
        break;
    case 3:
        if (Total_vehicle < 100)
        {
            cout << "....... Motorcycle parked ......."
                 << " ";
            m_count++;
            Total_vehicle++;
            m_amount += 50;
            Total_amount += 50;
        }
        else
        {
            cout << "....... Parking is full .......";
        }
        break;
    case 4:
        if (Total_vehicle < 100)
        {
            cout << "....... Cycle parked ......."
                 << " ";
            bc_count++;
            Total_vehicle++;
            bc_amount += 10;
            Total_amount += 10;
        }
        else
        {
            cout << "....... Parking is full .......";
        }
        break;
    case 5:
        if (Total_vehicle > 0)
        {
            system("cls"); // screen clear
            cout << ".......Check record.......    " << endl
                 << endl
                 << "Bus in parking        :       " << b_count << "   "
                 << "Bus amount collection :       " << b_amount << endl
                 << "Car in parking        :       " << c_count << "   "
                 << "Car amount collection :       " << c_amount << endl
                 << "Motorcycle in parking :       " << m_count << "   "
                 << "Motorcycle amount collection :" << m_amount << endl
                 << "Cycle in parking      :       " << bc_count << "  "
                 << "Cycle amount collection  :    " << bc_amount << endl
                 << "Total Vehicle in parking :    " << Total_vehicle << endl
                 << "Total amount             :    " << Total_amount << endl;
        }
        else
        {
            cout << "....... Parking is empty .......";
        }
        break;
    case 6:
    p:
        system("cls");
        cout << "....... Delete Vehicle ......."
             << "\n"
             << "1.   Bus"
             << "\n"
             << "2.   Car"
             << "\n"
             << "3.   Motorcycle"
             << "\n"
             << "4.   Bicycle"
             << "\n"
             << "Your choice";
        cin >> x;
        if (x == 1)
        {

            if (b_count > 0)
            {

                Total_vehicle--;
                b_count--;
                b_amount -= 150;
                cout << "....... Bus successfully removed .......";
            }
            else
            {
                cout << "....... NO bus is there in parking .......";
            }
        }
        else if (x == 2)
        {
            if (c_count > 0)
            {

                Total_vehicle--;
                c_count--;
                c_amount -= 100;
                cout << "....... Car successfully removed .......";
            }
            else
            {
                cout << "....... NO Car is there in parking .......";
            }
        }
        else if (x == 3)
        {
            if (m_count > 0)
            {
                Total_vehicle--;
                m_count--;
                m_amount -= 50;
                cout << "....... Motorcycle successfully removed .......";
            }
            else
            {
                cout << "....... NO motorcycle is there in parking .......";
            }
        }
        else if (x == 4)
        {
            if (bc_count > 0)
            {

                Total_vehicle--;
                bc_count--;
                bc_amount -= 10;
                cout << "....... Bicycle successfully removed .......";
            }
            else
            {
                cout << "....... NO bicycle is there in parking .......";
            }
        }
        else
        {
            cout << "....... Invalid choice ......."
                 << "/n"
                 << "....... Try again .......";
            getch();
            goto p;
        }
        break;
    case 7:
        cout << "....... Delete all record successfully .......";
        getch();
        goto k;

    case 8:
        exit(0);
    default:
        cout << "....... Invalid choice ......." << endl
             << "....... Please try again .......";
        goto h;
    }
    getch();
    goto h;
}