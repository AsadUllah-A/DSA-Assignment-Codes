#include <iostream>
using namespace std;

int main()
{
    cout << "Task # 5" << endl;
    int days = 7, hours = 24;
    double temperatures[7][24];
    cout << "\nEnter temperatures for each hour of the week (7 days, 24 hours per day):" << endl;

    for (int day = 0; day < days; day++)
    {
        cout << "\nDay #" << day + 1 << ":" << endl;
        for (int hour = 0; hour < hours; hour++)
        {
            cout << "  Hour #" << hour + 1 << ": ";
            cin >> temperatures[day][hour];
        }
    }

    double dailyAverages[days] = {0};
    double totalTemperature;
    int maxTempDay = 0, maxTempHour = 0;
    double maxTemperature = temperatures[0][0];
    int lowestAvgTempDay = 0;

    for (int day = 0; day < days; day++)
    {
        totalTemperature = 0;
        for (int hour = 0; hour < hours; hour++)
        {
            totalTemperature += temperatures[day][hour];
            if (temperatures[day][hour] > maxTemperature)
            {
                maxTemperature = temperatures[day][hour];
                maxTempDay = day;
                maxTempHour = hour;
            }
        }

        dailyAverages[day] = totalTemperature / hours;
        if (dailyAverages[day] < dailyAverages[lowestAvgTempDay])
        {
            lowestAvgTempDay = day;
        }
    }
    cout << "\nAverage temperatures for each day:" << endl;
    for (int day = 0; day < days; day++)
    {
        cout << "Day #" << day + 1 << ": " << dailyAverages[day] << "C" << endl;
    }

    cout << "\nThe highest temperature was " << maxTemperature << "C on Day #"
         << maxTempDay + 1 << " at Hour #" << maxTempHour + 1 << "." << endl;

    cout << "The day with the lowest average temperature is Day #"
         << lowestAvgTempDay + 1 << " with an average of "
         << dailyAverages[lowestAvgTempDay] << "C." << endl;

    return 0;
}
