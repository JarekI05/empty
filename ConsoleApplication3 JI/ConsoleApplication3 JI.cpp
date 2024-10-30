#include <iostream>
#include <vector>

using namespace std;

void p1()
{
    const int maxSize = 100;
    int n = 0;

    double tab[maxSize];

    do
    {
        cout << "n = \n";
        cin >> n;
    } while (n < 0 || n > 100);

    for (int i = 0; i < n; i++)
    {
        cout << "Ocena " << i + 1 << ": \n";
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << endl;
    }

    double sum = 0.0;
    double min = tab[0];
    double max = tab[0];

    for (int i = 1; i < n; i++)
    {
        sum += tab[i];
        
        if (tab[i] > max)
        {
            max = tab[i];
        }

        if (tab[i] < min)
        {
            min = tab[i];
        }
    }

    cout << "Suma = " << sum << endl;
    cout << "Srednia = " << sum / n << endl;
    cout << "Wartosc maksymalna = " << max << endl;
    cout << "Wartosc minimalna = " << min << endl;
    cout << "Liczba bajtow = " << sizeof(tab) << endl;
    cout << "Liczba elementow = " << sizeof(tab) / sizeof(tab[0]) << endl;
}

void p2()
{

    {
        
        int n = 0;

        do
        {
            cout << "n = \n";
            cin >> n;
        } while (n < 0 || n > 100);

        double* tab = new double[n];

        for (int i = 0; i < n; i++)
        {
            cout << "Ocena " << i + 1 << ": \n";
            cin >> tab[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << tab[i] << endl;
        }

        double sum = 0.0;
        double min = tab[0];
        double max = tab[0];

        for (int i = 1; i < n; i++)
        {
            sum += tab[i];

            if (tab[i] > max)
            {
                max = tab[i];
            }

            if (tab[i] < min)
            {
                min = tab[i];
            }
        }

        cout << "Suma = " << sum << endl;
        cout << "Srednia = " << sum / n << endl;
        cout << "Wartosc maksymalna = " << max << endl;
        cout << "Wartosc minimalna = " << min << endl;
        cout << "Liczba bajtow = " << sizeof(tab) << endl;
        cout << "Liczba elementow = " << sizeof(tab) / sizeof(tab[0]) << endl;
    }
}

void p3()
{

    {
        
        int n = 0;

        vector<double> tab(n);

        do
        {
            cout << "n = \n";
            cin >> n;
        } while (n < 0 || n > 100);

        for (int i = 0; i < tab.size(); i++)
        {
            cout << "Ocena " << i + 1 << ": \n";
            cin >> tab[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << tab[i] << endl;
        }

        double sum = 0.0;
        double min = tab[0];
        double max = tab[0];

        for (int i = 1; i < tab.size(); i++)
        {
            sum += tab[i];

            if (tab[i] > max)
            {
                max = tab[i];
            }

            if (tab[i] < min)
            {
                min = tab[i];
            }
        }

        cout << "Suma = " << sum << endl;
        cout << "Srednia = " << sum / tab.size() << endl;
        cout << "Wartosc maksymalna = " << max << endl;
        cout << "Wartosc minimalna = " << min << endl;
        cout << "Liczba bajtow = " << sizeof(tab) << endl;
        cout << "Liczba elementow = " << sizeof(tab) / sizeof(tab[0]) << endl;
    }
}

void p4()
{

    {
        vector<double> tab;
        int i = 1;

        while (true)
        {
            double x = 0.0;
            cout << "Ocena " << i++ << ": \n";
            cin >> x;
            if (x == 0)
            {
                break;
            }
            tab.push_back(x);
        }

        for (const double el : tab)
        {
            cout << el << ": \n";
        }

        double sum = 0.0;
        double min = tab[0];
        double max = tab[0];

        for (const auto el : tab)
        {
            sum += tab[i];

            if (el > max)
            {
                max = tab[i];
            }

            if (el < min)
            {
                min = tab[i];
            }
        }

        cout << "Suma = " << sum << endl;
        cout << "Srednia = " << sum / (sizeof(tab)/sizeof(tab[0])) << endl;
        cout << "Wartosc maksymalna = " << max << endl;
        cout << "Wartosc minimalna = " << min << endl;
        cout << "Liczba bajtow = " << sizeof(tab) << endl;
        cout << "Liczba elementow = " << sizeof(tab) / sizeof(tab[0]) << endl;
    }
}

void p5()
{

    {
        const int maxSize = 100;
        int rows = 0;
        int cols = 0;

        double tab[maxSize][maxSize];

        do
        {
            cout << "Liczba wierszy: \n";
            cin >> rows;
        } while (rows < 0 || rows > maxSize);

        do
        {
            cout << "Liczba kolumn: \n";
            cin >> cols;
        } while (cols < 0 || cols > maxSize);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "tab[" << i + 1 << "][" << j + 1 << "] = ";
                cin >> tab[i][j];
                cout << endl;
            }
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << tab[i][j] << "\t";
            }
            cout << endl;
        }

        double sum = 0.0;
        double min = tab[0][0];
        double max = tab[0][0];

        for (int i = 1; i < rows; i++)
        {
            for (int j = 1; j < cols; j++)
            {
                sum += tab[i][j];

                if (tab[i][j] > max)
                {
                    max = tab[i][j];
                }

                if (tab[i][j] < min)
                {
                    min = tab[i][j];
                }
            }
            
        }

        cout << "Suma = " << sum << endl;
        cout << "Srednia = " << sum / (sizeof (tab) / sizeof (tab[0][0])) << endl;
        cout << "Wartosc maksymalna = " << max << endl;
        cout << "Wartosc minimalna = " << min << endl;
        cout << "Liczba bajtow = " << sizeof(tab) << endl;
        cout << "Liczba elementow = " << sizeof(tab) / sizeof(tab[0][0]) << endl;
    }
}

int main()
{
    /*p1();
    p2();
    p3();
    p4();*/
    p5();
}

