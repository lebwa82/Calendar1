#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class MeetingInfo
{
public:
    int meetingId;
    int userId;
    char *Msg;
    time_t dataTime;
};

class Calendar
{
public:
    vector <MeetingInfo> MeetingInfoarray;
    int maxMeetingId;

    Calendar()//конструктор
    {
        maxMeetingId=-1;
    }
    ~Calendar()//деструктор
    {
        MeetingInfoarray.clear();
    }

    int pusharray(MeetingInfo a)//метод добавления в массив
    {
        maxMeetingId++;
        a.meetingId=maxMeetingId;
        MeetingInfoarray.push_back(a);
        return 0;
    }

};

void print(MeetingInfo a)
{
    cout << a.meetingId << "\n" << a.userId << "\n" << a.Msg << endl;
}

int main()
{
    cout << "Hello world!\n";
    MeetingInfo a= {10,1,"Hello"};
    //print(a);
    Calendar b;
    b.pusharray(a);
    print(b.MeetingInfoarray[b.maxMeetingId]);

    return 0;
}
