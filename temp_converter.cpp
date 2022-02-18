#include <iostream>
#include <stdlib.h>

using namespace std;

float celsius_to_fahrenheit(float celsius)
{
    float ans;
    ans = (celsius * 9.0) / 5.0 + 32;
    return ans;
}

float fahrenheit_to_celsius(float fahrenheit)
{
    const int a = 5, b = 32, c = 9;
    float ans;
    ans = a * (fahrenheit - b) / c;
    return ans;
}
float celsius_to_kelvin(float celsius)
{
    float ans;
    const float kel = 213.15;
    ans = celsius + kel;
    return ans;
}

void start();

int main()
{
    float celsius, fahrenheit, kelvin;
    char decision;
    int sym;

    start();

    do
    {
        system("cls");

        cout << "\n\t*******************************************************************************************";
        cout << "\n\t\t\t\t\tTemperature Converter" << endl;
        cout << "\n\t*******************************************************************************************" << "\n";
        cout << "\n\t\t\t\t\t[1] - Celsius to Fahrenheit" << endl;
        cout << "\n\t\t\t\t\t[2] - Fahrenheit to Celsius" << endl;
        cout << "\n\t\t\t\t\t[3] - Celsius to Kelvin" << endl;
        cout << "\n\t*******************************************************************************************" << "\n";

        cout << "\n\t\t\t\tChoose an option: ";
        cin >> sym;

        system("cls");

        switch (sym)
        {
        case 1:

            cout << "\n\t\tYou have chosen Celsius to Fahrenheit Conversion";
            cout << "\n\t\t________________________________________________" << "\n";
            cout << "\n\tEnter the temperature in Celsius: ";
            cin >> celsius;

            fahrenheit = celsius_to_fahrenheit(celsius);
            cout << "\n\tThe temperature in Fahrenheit: " << fahrenheit << endl;
            break;

        case 2:
            cout << "\n\tYou have chosen Fahrenheit to Celsius Conversion";
            cout << "\n\t________________________________________________" << "\n";
            cout << "\n\tEnter the temperature in Fahrenheit: ";
            cin >> fahrenheit;

            celsius = fahrenheit_to_celsius(fahrenheit);
            cout << "\n\tThe temperature in Celsius: " << celsius << endl;
            break;

        case 3:
            cout << "\n\t\tYou have chosen Celsius to Kelvin Converter";
            cout << "\n\t\t___________________________________________" << "\n";
            cout << "\n\tEnter the temperature in Celsius: ";
            cin >> celsius;

            kelvin = celsius_to_kelvin(celsius);
            cout << "\n\tThe temperature in Kelvin: " << kelvin << endl;
            break;

        default:
            cout << "\n\t\t Invalid" << "\n";
            cout << "\n\tEnter any key to return to menu: ";

            cin.ignore();
            cin.get();
            break;
        }

        cout << "\n\tDo you want to continue? [Y/N]: ";
        cin >> decision;

        if ((decision == 'Y') || (decision == 'y'))
        {
            cin.get();
        }
        else if ((decision == 'N') || (decision == 'n'))
        {
            system("cls");
            cout << "\n\t\tThank you for using the system." << "\n";
        }
        else
        {
            system("cls");

            cout << "\n\t\tInvalid" << "\n";
            cout << "\n\tPress any key to return to menu: ";

            cin.ignore();
            cin.get();
        }

    } while (decision != 'N' && decision != 'n');

    return 0;
}
void start()
{
    cout << "\n\t*******************************************************************************************";
    cout << "\n\t\t\t\t\tTemperature Converter" << endl;
    cout << "\n\t*******************************************************************************************" << "\n";
    cout << "\n\t\t\t\t\tCreated by: Danielle John P. Cruz" << endl;
    cout << "\n\t*******************************************************************************************" << "\n";
    cout << "\n\t\t\t\tEnter any key to continue: ";

    cin.get();
}

