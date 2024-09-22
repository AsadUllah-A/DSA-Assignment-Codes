#include <iostream>
using namespace std;

int main() 
{
    cout << "Task # 02" << endl;
    double sales[12][12];
    double a_sales[12] = {0};  
    double t_sales = 0;            
    int h_s_branch = 0, l_s_branch = 0;

    cout << "\nEnter monthly sales for 12 branches over 12 months:" << endl;
    for (int i = 0; i < 12; i++) 
    {
        cout << "\nBranch #" << i + 1 << " Sales:" << endl;
        for (int j = 0; j < 12; j++) 
        {
            cout << "  Month #" << j + 1 << " Sales: $";
            cin >> sales[i][j];
            a_sales[i] += sales[i][j];
        }
        t_sales += a_sales[i];
    }

    for (int i = 1; i < 12; i++) 
    {
        if (a_sales[i] > a_sales[h_s_branch]) 
        {
            h_s_branch = i;
        }
        if (a_sales[i] < a_sales[l_s_branch]) 
        {
            l_s_branch = i;
        }
    }

    cout << "\nTotal Annual Sales for each Branch:" << endl;
    for (int i = 0; i < 12; i++) 
    {
        cout << "Branch #" << i + 1 << ": $" << a_sales[i] << endl;
    }

    cout << "\nTotal Annual Sales for All Branches: $" << t_sales << endl;

    cout << "Branch with Highest Sales: Branch #" << h_s_branch + 1 
         << " with sales of $" << a_sales[h_s_branch] << endl;

    cout << "Branch with Lowest Sales: Branch #" << l_s_branch + 1 
         << " with sales of $" << a_sales[l_s_branch] << endl;

    return 0;
}
