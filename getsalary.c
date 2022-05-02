#include <iostream>
using namespace std;

void getworktime_min(float worktime, float *worktime_min)
{
    cout << "worktime is: " << worktime << endl;

    int hour = 0;
    float min = 0;

    if(worktime > 1)
    {
        hour = worktime;

        //cout << "hour is: " << hour << endl;

        min = worktime - hour;

        //cout << "min is: " << min << endl;

        *worktime_min = hour*60 + min*100;
    }

    if(worktime == 1)
    {
        *worktime_min = 60; 
    }

    if(worktime < 1)
    {
        *worktime_min = worktime*100;
    }

    //cout << "worktime_min is: " << *worktime_min << endl;
}

int main()
{
    float worktime = 0;
    float worktime_min = 0;
    float allworktime_min = 0;

    int salary_hour = 1500;
    float salary = 0;

    cout << "Please entry the worktime by X.X(hours . minutes)" << endl;

    while(cin >> worktime)
    {
        if(worktime == 0)
        {
            break;
        }

        //cout << "worktime is: " << worktime << endl;

        getworktime_min(worktime, &worktime_min);


        allworktime_min += worktime_min;
        cout << "Your whole worktime is: " << allworktime_min << " min" << endl;

        salary = (allworktime_min/60)*salary_hour;

        cout << "Your salary is: " << salary << " gen" << endl; 
    }

    return 0;
}