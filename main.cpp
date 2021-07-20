#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct MeetingInfo
{
    int meetingId;
    int userId;
    char *Msg;
    time_t dataTime;
} MeetingInfo;

struct Calendar
{
    vector <struct MeetingInfo> MeetingInfoarray;
    int maxMeetingId;

    Calendar()//конструктор
    {
       maxMeetingId=-1;
       struct MeetingInfo a={0,0,"\0"};
       Calendar::pusharray(a);
    }

    int pusharray(struct MeetingInfo a)//метод добавления в массив
    {
        struct MeetingInfo * b = new struct MeetingInfo;
        b->meetingId=this->maxMeetingId+1;
        b->Msg=a.Msg;
        b->userId=a.userId;
        b->dataTime=a.dataTime;

        this->MeetingInfoarray.push_back(*b);
        this->maxMeetingId++;
        return 0;
    }

};

void print(struct MeetingInfo a)
{
    cout << a.meetingId << "\n" << a.userId << "\n" << a.Msg << endl;
}

int main()
{
    cout << "Hello world!\n";
    struct MeetingInfo a={10,1,"Hello"};
    //print(a);
    Calendar b;
    b.pusharray(a);
    print(b.MeetingInfoarray[b.maxMeetingId]);

    return 0;
}
